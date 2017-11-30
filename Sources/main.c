/* ###################################################################
**     Filename    : main.c
**     Project     : KL03_mesoEaxon
**     Processor   : MKL03Z32VFK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-10-04, 10:37, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */

/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "clockMan1.h"
#include "pin_init.h"
#include "osa1.h"
#include "adConv1.h"
#include "lpuartCom1.h"
#if CPU_INIT_CONFIG
  #include "Init_Config.h"
#endif
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "PE_types.h"
#include "fsl_adc16_driver.h"

#define ERR_OK                          0x00U /*!< OK */
volatile uint8_t Tx_start, Tx_byte1, Tx_byte2, counter, Tx_finish; //emg = [byte1,byte2]
volatile uint8_t Tx_buffer[5];

unsigned long cont = 0 ;

//ADC variables
volatile bool ADC_init_status;
volatile bool ADC_finished;
#define ADC_INPUT_CHAN 3 // default ADC channel for hw trigger demo (comes from adc_hw_trigger.h)
#define ADC_INST 0U

///////////////////////////////////////////////////////////////////////////////
// Variables
///////////////////////////////////////////////////////////////////////////////
static uint16_t result;//static float result; //store value obtained in ADC// static uint16_t result; //store value obtained in ADC
unsigned int coco_mask = 0b10000000U;
unsigned int result_mask = 0;


///////////////////////////////////////////////////////////////////////////////
// Code
///////////////////////////////////////////////////////////////////////////////
static int32_t init_adc(uint32_t instance)
{
    adc16_converter_config_t adcUserConfig;
    adc16_chn_config_t adcChnConfig;
#if FSL_FEATURE_ADC16_HAS_CALIBRATION
    // Initialization ADC for calibration purposes
    adc16_calibration_param_t adcCalibrationParam;
    adc16_chn_config_t adcCalibrationChnConfig;
    const adc16_hw_average_config_t adcAverageConfig = {
      .hwAverageEnable = true,
      .hwAverageCountMode = kAdc16HwAverageCountOf32
    };

    ADC16_DRV_StructInitUserConfigDefault(&adcUserConfig);
#if BOARD_ADC_USE_ALT_VREF
    adcUserConfig.refVoltSrc = kAdc16RefVoltSrcOfValt;
#endif
    ADC16_DRV_Init(instance, &adcUserConfig);
    ADC16_DRV_ConfigHwAverage(instance, &adcAverageConfig);

    adcChnConfig.chnIdx = kAdc16Chn31;
#if FSL_FEATURE_ADC16_HAS_DIFF_MODE
    adcCalibrationChnConfig.diffConvEnable = false;
#endif // FSL_FEATURE_ADC16_HAS_DIFF_MODE
    adcCalibrationChnConfig.convCompletedIntEnable = false;

    // Configure channel0
    ADC16_DRV_ConfigConvChn(instance, 0U, &adcCalibrationChnConfig);

    // Auto calibration.
    ADC16_DRV_GetAutoCalibrationParam(instance, &adcCalibrationParam);
    ADC16_DRV_SetCalibrationParam(instance, &adcCalibrationParam);
#endif
    return 0;
}


int main(void)
{

	//From LPUART
	int a; //for delays
	short emg; //2 bytes, signed
	int bit8, bit9, eq; //signed
	uint32_t byteCountBuff = 0;

  PE_low_level_init();// End of Processor Expert internal initialization.
  GPIOB_Init(); //inicializa el GPIO
  init_adc(ADC_INST);
  GPIOB_PDOR = 0b10110000000000U; // Todos los leds apagados

  //---------Configures ADC---------------//
  ADC0_CFG1 = 0b10011000;//Pg. 389: ADC configuration register 1
		  //Bit7: low power = 1
		  //Bit6-5: ADCK input clock / 1 =00
		  //Bit4: long sample time = 1
		  //Bit3-2: single end-10 bit = 10
		  //Bit1-0: bus clock = 00
  ADC0_SC2 = 0b00000000;//Pg. 393: Status control register 2
		  //Bit 7 ADACT 0 Flag indicates if a conversion is in progress.
		  //Bit 6 ADTRG 0 Software trigger selected.
		  //Bit 5 ACFE 0 Compare function disabled.
		  //Bit 4 ACFGT 0 Not used in this example.
		  //Bit 3 ACREN 0 Compare range disabled.
		  //Bit 1:0 REFSEL 00 Selects default voltage reference pin pair (External pins VREFH and VREFL).
  ADC0_SC1A = 0b01001001; //Pag 387: ADC status and control registers 1
		  //Bit 7 COCO 0 Read-only flag which is set when a conversion completes.
		  //Bit 6 AIEN 1 Conversion complete interrupt enabled.
		  //Bit 4:0 ADCH 01001 Input channel ADC0_SE9 == PTB0 selected as ADC input channel.

  //-----------Initializes LPUART--------------------//
    // Fill in lpuart config data
    lpuart_user_config_t lpuartConfig = {
        .clockSource     = kClockLpuartSrcMcgIrClk,//BOARD_LPUART_CLOCK_SOURCE,
        .bitCountPerChar = kLpuart8BitsPerChar,
        .parityMode      = kLpuartParityDisabled,
        .stopBitCount    = kLpuartOneStopBit,
        .baudRate        = 9600//BOARD_DEBUG_UART_BAUD
    };
    LPUART_DRV_Init(lpuartCom1_IDX, &lpuartCom1_State, &lpuartConfig); // Initialize the lpuart module with instance number and config structure


    Tx_start = 55; //marca el inicio del dato
    Tx_finish = 88; //end of the data
    counter=0; // sample counter
    Tx_buffer[0] = Tx_start;
    Tx_buffer[1] = 0; //Tx_byte1;
    Tx_buffer[2] = 0; //Tx_byte2;
    Tx_buffer[4] = Tx_finish;

    GPIOB_PDOR &= ~ (1 << 10); // Led rojo encendido

  for(;;) {
	  GPIOB_PDOR ^= 0b110000000000U; //Toggle led red, green = DataB;
	  result_mask = ADC0_SC1A && coco_mask;
	  if (result_mask != 0) { //Result is ready to be read
		  result = ADC0_RA;//ADC16_DRV_GetConvValueRAW(ADC_INST, (uint32_t)gCurChan);   result*3/1023;

		  //---Send value LPUART----//
		  emg=result;
		  if (emg<256){
			  Tx_byte1 = 0-128;
			  Tx_byte2 =emg-128;
		  }
		  else {
			  bit8 = ((emg >> 8)  & 0x01);
			  bit9 = ((emg >> 9)  & 0x01);
			  Tx_byte1 = (bit9*2 + bit8*1)-128;
			  eq = bit9*512 + bit8*256;
			  Tx_byte2 = (emg - eq)-128;
		  }
		  //Update TX buffer
		  Tx_buffer[1] = Tx_byte1;
		  Tx_buffer[2] = Tx_byte2;
		  Tx_buffer[3] = counter;
		  LPUART_DRV_SendDataBlocking(lpuartCom1_IDX, &Tx_buffer, 5, 1000u);
		  counter = counter+1;
		  //--back to ADC cycle--//
		  result_mask = 0;
		  ADC0_SC1A = 0b01001001;;//initiate conversion again with AIEN - interrupt enable
	  }
	  //for (cont = 0; cont < 1000000; cont++)    {	    }
  }




  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
