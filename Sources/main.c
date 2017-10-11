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
#if CPU_INIT_CONFIG
  #include "Init_Config.h"
#endif
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "PE_types.h"
#include "fsl_adc16_driver.h"


unsigned long cont = 0 ;
//ADC variables
static uint16_t result; //store value obtained in ADC
volatile bool ADC_init_status;
volatile bool ADC_finished;
#define ADC_INPUT_CHAN 3 // default ADC channel for hw trigger demo (comes from adc_hw_trigger.h)
#define ADC_INST 0U

///////////////////////////////////////////////////////////////////////////////
// Variables
///////////////////////////////////////////////////////////////////////////////
//static volatile bool gAdcDone = false; // sync object for adc convert result
//static volatile uint8_t gCurChan = 0;
unsigned int coco_mask = 0b10000000U;
unsigned int result_mask = 0;
//SIM_Type * gSimBase[] = SIM_BASE_PTRS; // SIM base address
//static sparse_node_ptr gChartHead[CHART_ROWS]; // sparse matrix head
//static sparse_node_t gChartNodes[NR_SAMPLES]; // sparse matrix nodes
//static uint32_t gFreeNode = 0; // free node slot index for gChartNodes[]


///////////////////////////////////////////////////////////////////////////////
// Code
///////////////////////////////////////////////////////////////////////////////
/*!
 * @brief ADC channel0 callback for fetching sample data.
 */
/*static void adc_chn0_isr_callback(void)
{
    gCurChan = 0;
    gAdcDone = true;
}*/

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
#endif // FSL_FEATURE_ADC16_HAS_DIFF_MODE /*/
    adcCalibrationChnConfig.convCompletedIntEnable = false;

    // Configure channel0
    ADC16_DRV_ConfigConvChn(instance, 0U, &adcCalibrationChnConfig);

    // Configure channel1, which is used in PDB trigger case
    //ADC16_DRV_ConfigConvChn(instance, 1U, &adcCalibrationChnConfig);

    // Auto calibration.
    ADC16_DRV_GetAutoCalibrationParam(instance, &adcCalibrationParam);
    ADC16_DRV_SetCalibrationParam(instance, &adcCalibrationParam);
#endif

    /*// Initialization ADC for
    // 12bit resolution, interrrupt mode, hw trigger enabled.
    // normal convert speed, VREFH/L as reference,
    // disable continuouse convert mode.
    ADC16_DRV_StructInitUserConfigDefault(&adcUserConfig);
    adcUserConfig.hwTriggerEnable = true;
    adcUserConfig.continuousConvEnable = false;
#if BOARD_ADC_USE_ALT_VREF
    adcUserConfig.refVoltSrc = kAdc16RefVoltSrcOfValt;
#endif
    ADC16_DRV_Init(instance, &adcUserConfig); //Initialized the ADC module converter

    // Install Callback function into ISR
    ADC_TEST_InstallCallback(instance, 0U, adc_chn0_isr_callback);
    //ADC_TEST_InstallCallback(instance, 1U, adc_chn1_isr_callback);

    adcChnConfig.chnIdx = (adc16_chn_t)ADC_INPUT_CHAN;
#if FSL_FEATURE_ADC16_HAS_DIFF_MODE
    adcChnConfig.diffConvEnable = false;
#endif // FSL_FEATURE_ADC16_HAS_DIFF_MODE /
    adcChnConfig.convCompletedIntEnable = true;

    // Configure channel0
    ADC16_DRV_ConfigConvChn(instance, 0U, &adcChnConfig);

    // Configure channel1, which is used in PDB trigger case
    ADC16_DRV_ConfigConvChn(instance, 1U, &adcChnConfig);*/

    return 0;
}


int main(void)
{
  PE_low_level_init();// End of Processor Expert internal initialization.
  //bool ERROR_global = FALSE; //error global del sistema
  GPIOB_Init(); //inicializa el GPIO
  init_adc(ADC_INST);
  GPIOB_PDOR = 0b10110000000000U; // Todos los leds apagados

  //Configures ADC
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

  GPIOB_PDOR &= ~ (1 << 10); // Led rojo encendido

  for(;;) {
	  GPIOB_PDOR ^= 0b110000000000U; //Toggle led red, green = DataB;
	 /* result_mask = ADC0_SC1A && coco_mask;
	  if (result_mask != 0) {
		  ADC_finished = TRUE; // Result is ready to be read
	  }*/
	  result_mask = ADC0_SC1A && coco_mask;
	  if (result_mask != 0) { //Result is ready to be read
		  result = ADC0_RA;//ADC16_DRV_GetConvValueRAW(ADC_INST, (uint32_t)gCurChan);
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
