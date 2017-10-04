/** ###################################################################
**      Filename    : Peripherals_Init.c
**      Processor   : MKL03Z4
**      Version     : 1.0
**      Abstract    :
**
** 
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Peripherals_Init.c                                                  
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Peripherals_Init_module Peripherals_Init module documentation
**  @{
*/         

/* MODULE Peripherals_Init.c */

#include "Peripherals_Init.h"
#include "Init_Config.h"

#ifdef __cplusplus
extern "C" {
#endif

void Peripherals_Init(void)
{
#ifdef NVIC_AUTOINIT
  NVIC_Init();
#endif /* NVIC_AUTOINIT */
#ifdef SIM_AUTOINIT
  SIM_Init();
#endif /* SIM_AUTOINIT */

#ifdef MCM_AUTOINIT
  MCM_Init();
#endif /* MCM_AUTOINIT */
#ifdef PMC_AUTOINIT
  PMC_Init();
#endif /* PMC_AUTOINIT */
#ifdef PORTA_AUTOINIT
  PORTA_Init();
#endif /* PORTA_AUTOINIT */
#ifdef PORTB_AUTOINIT
  PORTB_Init();
#endif /* PORTB_AUTOINIT */

#ifdef ADC0_AUTOINIT
  ADC0_Init();
#endif /* ADC0_AUTOINIT */
#ifdef CMP0_AUTOINIT
  CMP0_Init();
#endif /* CMP0_AUTOINIT */
#ifdef COP_AUTOINIT
  COP_Init();
#endif /* COP_AUTOINIT */
#ifdef FTFA_AUTOINIT
  FTFA_Init();
#endif /* FTFA_AUTOINIT */
#ifdef GPIOA_AUTOINIT
  GPIOA_Init();
#endif /* GPIOA_AUTOINIT */
#ifdef GPIOB_AUTOINIT
  GPIOB_Init();
#endif /* GPIOB_AUTOINIT */
#ifdef I2C0_AUTOINIT
  I2C0_Init();
#endif /* I2C0_AUTOINIT */
#ifdef LLWU_AUTOINIT
  LLWU_Init();
#endif /* LLWU_AUTOINIT */
#ifdef LPTMR0_AUTOINIT
  LPTMR0_Init();
#endif /* LPTMR0_AUTOINIT */
#ifdef LPUART0_AUTOINIT
  LPUART0_Init();
#endif /* LPUART0_AUTOINIT */
#ifdef RCM_AUTOINIT
  RCM_Init();
#endif /* RCM_AUTOINIT */
#ifdef RTC_AUTOINIT
  RTC_Init();
#endif /* RTC_AUTOINIT */
#ifdef SMC_AUTOINIT
  SMC_Init();
#endif /* SMC_AUTOINIT */
#ifdef SPI0_AUTOINIT
  SPI0_Init();
#endif /* SPI0_AUTOINIT */
#ifdef SystemControl_AUTOINIT
  SystemControl_Init();
#endif /* SystemControl_AUTOINIT */
#ifdef SysTick_AUTOINIT
  SysTick_Init();
#endif /* SysTick_AUTOINIT */
#ifdef TPM0_AUTOINIT
  TPM0_Init();
#endif /* TPM0_AUTOINIT */
#ifdef TPM1_AUTOINIT
  TPM1_Init();
#endif /* TPM1_AUTOINIT */
#ifdef VREF_AUTOINIT
  VREF_Init();
#endif /* VREF_AUTOINIT */
}

#ifdef __cplusplus
}
#endif

/* END Peripherals_Init.h */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file is a part of Processor Expert static initialization
**     library for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
