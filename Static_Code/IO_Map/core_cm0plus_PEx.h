/*
** ###################################################################
**     Compilers:           ARM Compiler
**                          Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**
**
**     Abstract:
**         This header file implements compatibility layer between
**         Freescale Processor Expert and CMSIS Cortex-M4 Core Peripheral 
**         Access Layer Header File.
**
**     Copyright: 1997 - 2013 Freescale, Inc. All Rights Reserved.
**
**     http:                 www.freescale.com
**     mail:                 support@freescale.com
** ###################################################################
*/
/*!
 * @file core_cm4_PEx.h
 * @version 1.0
 * @date 2013-10-04
 * @brief CMSIS compatibility layer forFreescale Processor Expert
 *
 * This header file implements compatibility layer between Freescale Processor Expert and CMSIS Cortex-M4 Core Peripheral Access Layer Header File.
 */

#ifndef __PEx_CORE_CM4_H
#define __PEx_CORE_CM4_H

/* ----------------------------------------------------------------------------
   -- NVIC
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Peripheral NVIC
 * @{
 */

/* ----------------------------------------------------------------------------
   -- NVIC - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Register_Accessor_Macros NVIC - Register accessor macros
 * @{
 */


/* NVIC - Register accessors */
#define NVIC_ISER_REG(base)                      ((base)->ISER[0])
#define NVIC_ICER_REG(base)                      ((base)->ICER[0])
#define NVIC_ISPR_REG(base)                      ((base)->ISPR[0])
#define NVIC_ICPR_REG(base)                      ((base)->ICPR[0])
#define NVIC_IP_REG(base,index)                  ((base)->IP[index])

/*!
 * @}
 */ /* end of group NVIC_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- NVIC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Register_Masks NVIC Register Masks
 * @{
 */

/* ISER Bit Fields */
#define NVIC_ISER_SETENA_MASK                    0xFFFFFFFFu
#define NVIC_ISER_SETENA_SHIFT                   0
#define NVIC_ISER_SETENA(x)                      (((uint32_t)(((uint32_t)(x))<<NVIC_ISER_SETENA_SHIFT))&NVIC_ISER_SETENA_MASK)
#define NVIC_ISER_SETENA0_MASK                   0x1u
#define NVIC_ISER_SETENA0_SHIFT                  0
#define NVIC_ISER_SETENA1_MASK                   0x2u
#define NVIC_ISER_SETENA1_SHIFT                  1
#define NVIC_ISER_SETENA2_MASK                   0x4u
#define NVIC_ISER_SETENA2_SHIFT                  2
#define NVIC_ISER_SETENA3_MASK                   0x8u
#define NVIC_ISER_SETENA3_SHIFT                  3
#define NVIC_ISER_SETENA4_MASK                   0x10u
#define NVIC_ISER_SETENA4_SHIFT                  4
#define NVIC_ISER_SETENA5_MASK                   0x20u
#define NVIC_ISER_SETENA5_SHIFT                  5
#define NVIC_ISER_SETENA6_MASK                   0x40u
#define NVIC_ISER_SETENA6_SHIFT                  6
#define NVIC_ISER_SETENA7_MASK                   0x80u
#define NVIC_ISER_SETENA7_SHIFT                  7
#define NVIC_ISER_SETENA8_MASK                   0x100u
#define NVIC_ISER_SETENA8_SHIFT                  8
#define NVIC_ISER_SETENA9_MASK                   0x200u
#define NVIC_ISER_SETENA9_SHIFT                  9
#define NVIC_ISER_SETENA10_MASK                  0x400u
#define NVIC_ISER_SETENA10_SHIFT                 10
#define NVIC_ISER_SETENA11_MASK                  0x800u
#define NVIC_ISER_SETENA11_SHIFT                 11
#define NVIC_ISER_SETENA12_MASK                  0x1000u
#define NVIC_ISER_SETENA12_SHIFT                 12
#define NVIC_ISER_SETENA13_MASK                  0x2000u
#define NVIC_ISER_SETENA13_SHIFT                 13
#define NVIC_ISER_SETENA14_MASK                  0x4000u
#define NVIC_ISER_SETENA14_SHIFT                 14
#define NVIC_ISER_SETENA15_MASK                  0x8000u
#define NVIC_ISER_SETENA15_SHIFT                 15
#define NVIC_ISER_SETENA16_MASK                  0x10000u
#define NVIC_ISER_SETENA16_SHIFT                 16
#define NVIC_ISER_SETENA17_MASK                  0x20000u
#define NVIC_ISER_SETENA17_SHIFT                 17
#define NVIC_ISER_SETENA18_MASK                  0x40000u
#define NVIC_ISER_SETENA18_SHIFT                 18
#define NVIC_ISER_SETENA19_MASK                  0x80000u
#define NVIC_ISER_SETENA19_SHIFT                 19
#define NVIC_ISER_SETENA20_MASK                  0x100000u
#define NVIC_ISER_SETENA20_SHIFT                 20
#define NVIC_ISER_SETENA21_MASK                  0x200000u
#define NVIC_ISER_SETENA21_SHIFT                 21
#define NVIC_ISER_SETENA22_MASK                  0x400000u
#define NVIC_ISER_SETENA22_SHIFT                 22
#define NVIC_ISER_SETENA23_MASK                  0x800000u
#define NVIC_ISER_SETENA23_SHIFT                 23
#define NVIC_ISER_SETENA24_MASK                  0x1000000u
#define NVIC_ISER_SETENA24_SHIFT                 24
#define NVIC_ISER_SETENA25_MASK                  0x2000000u
#define NVIC_ISER_SETENA25_SHIFT                 25
#define NVIC_ISER_SETENA26_MASK                  0x4000000u
#define NVIC_ISER_SETENA26_SHIFT                 26
#define NVIC_ISER_SETENA27_MASK                  0x8000000u
#define NVIC_ISER_SETENA27_SHIFT                 27
#define NVIC_ISER_SETENA28_MASK                  0x10000000u
#define NVIC_ISER_SETENA28_SHIFT                 28
#define NVIC_ISER_SETENA29_MASK                  0x20000000u
#define NVIC_ISER_SETENA29_SHIFT                 29
#define NVIC_ISER_SETENA30_MASK                  0x40000000u
#define NVIC_ISER_SETENA30_SHIFT                 30
#define NVIC_ISER_SETENA31_MASK                  0x80000000u
#define NVIC_ISER_SETENA31_SHIFT                 31
/* ICER Bit Fields */
#define NVIC_ICER_CLRENA_MASK                    0xFFFFFFFFu
#define NVIC_ICER_CLRENA_SHIFT                   0
#define NVIC_ICER_CLRENA(x)                      (((uint32_t)(((uint32_t)(x))<<NVIC_ICER_CLRENA_SHIFT))&NVIC_ICER_CLRENA_MASK)
#define NVIC_ICER_CLRENA0_MASK                   0x1u
#define NVIC_ICER_CLRENA0_SHIFT                  0
#define NVIC_ICER_CLRENA1_MASK                   0x2u
#define NVIC_ICER_CLRENA1_SHIFT                  1
#define NVIC_ICER_CLRENA2_MASK                   0x4u
#define NVIC_ICER_CLRENA2_SHIFT                  2
#define NVIC_ICER_CLRENA3_MASK                   0x8u
#define NVIC_ICER_CLRENA3_SHIFT                  3
#define NVIC_ICER_CLRENA4_MASK                   0x10u
#define NVIC_ICER_CLRENA4_SHIFT                  4
#define NVIC_ICER_CLRENA5_MASK                   0x20u
#define NVIC_ICER_CLRENA5_SHIFT                  5
#define NVIC_ICER_CLRENA6_MASK                   0x40u
#define NVIC_ICER_CLRENA6_SHIFT                  6
#define NVIC_ICER_CLRENA7_MASK                   0x80u
#define NVIC_ICER_CLRENA7_SHIFT                  7
#define NVIC_ICER_CLRENA8_MASK                   0x100u
#define NVIC_ICER_CLRENA8_SHIFT                  8
#define NVIC_ICER_CLRENA9_MASK                   0x200u
#define NVIC_ICER_CLRENA9_SHIFT                  9
#define NVIC_ICER_CLRENA10_MASK                  0x400u
#define NVIC_ICER_CLRENA10_SHIFT                 10
#define NVIC_ICER_CLRENA11_MASK                  0x800u
#define NVIC_ICER_CLRENA11_SHIFT                 11
#define NVIC_ICER_CLRENA12_MASK                  0x1000u
#define NVIC_ICER_CLRENA12_SHIFT                 12
#define NVIC_ICER_CLRENA13_MASK                  0x2000u
#define NVIC_ICER_CLRENA13_SHIFT                 13
#define NVIC_ICER_CLRENA14_MASK                  0x4000u
#define NVIC_ICER_CLRENA14_SHIFT                 14
#define NVIC_ICER_CLRENA15_MASK                  0x8000u
#define NVIC_ICER_CLRENA15_SHIFT                 15
#define NVIC_ICER_CLRENA16_MASK                  0x10000u
#define NVIC_ICER_CLRENA16_SHIFT                 16
#define NVIC_ICER_CLRENA17_MASK                  0x20000u
#define NVIC_ICER_CLRENA17_SHIFT                 17
#define NVIC_ICER_CLRENA18_MASK                  0x40000u
#define NVIC_ICER_CLRENA18_SHIFT                 18
#define NVIC_ICER_CLRENA19_MASK                  0x80000u
#define NVIC_ICER_CLRENA19_SHIFT                 19
#define NVIC_ICER_CLRENA20_MASK                  0x100000u
#define NVIC_ICER_CLRENA20_SHIFT                 20
#define NVIC_ICER_CLRENA21_MASK                  0x200000u
#define NVIC_ICER_CLRENA21_SHIFT                 21
#define NVIC_ICER_CLRENA22_MASK                  0x400000u
#define NVIC_ICER_CLRENA22_SHIFT                 22
#define NVIC_ICER_CLRENA23_MASK                  0x800000u
#define NVIC_ICER_CLRENA23_SHIFT                 23
#define NVIC_ICER_CLRENA24_MASK                  0x1000000u
#define NVIC_ICER_CLRENA24_SHIFT                 24
#define NVIC_ICER_CLRENA25_MASK                  0x2000000u
#define NVIC_ICER_CLRENA25_SHIFT                 25
#define NVIC_ICER_CLRENA26_MASK                  0x4000000u
#define NVIC_ICER_CLRENA26_SHIFT                 26
#define NVIC_ICER_CLRENA27_MASK                  0x8000000u
#define NVIC_ICER_CLRENA27_SHIFT                 27
#define NVIC_ICER_CLRENA28_MASK                  0x10000000u
#define NVIC_ICER_CLRENA28_SHIFT                 28
#define NVIC_ICER_CLRENA29_MASK                  0x20000000u
#define NVIC_ICER_CLRENA29_SHIFT                 29
#define NVIC_ICER_CLRENA30_MASK                  0x40000000u
#define NVIC_ICER_CLRENA30_SHIFT                 30
#define NVIC_ICER_CLRENA31_MASK                  0x80000000u
#define NVIC_ICER_CLRENA31_SHIFT                 31
/* ISPR Bit Fields */
#define NVIC_ISPR_SETPEND_MASK                   0xFFFFFFFFu
#define NVIC_ISPR_SETPEND_SHIFT                  0
#define NVIC_ISPR_SETPEND(x)                     (((uint32_t)(((uint32_t)(x))<<NVIC_ISPR_SETPEND_SHIFT))&NVIC_ISPR_SETPEND_MASK)
#define NVIC_ISPR_SETPEND0_MASK                  0x1u
#define NVIC_ISPR_SETPEND0_SHIFT                 0
#define NVIC_ISPR_SETPEND1_MASK                  0x2u
#define NVIC_ISPR_SETPEND1_SHIFT                 1
#define NVIC_ISPR_SETPEND2_MASK                  0x4u
#define NVIC_ISPR_SETPEND2_SHIFT                 2
#define NVIC_ISPR_SETPEND3_MASK                  0x8u
#define NVIC_ISPR_SETPEND3_SHIFT                 3
#define NVIC_ISPR_SETPEND4_MASK                  0x10u
#define NVIC_ISPR_SETPEND4_SHIFT                 4
#define NVIC_ISPR_SETPEND5_MASK                  0x20u
#define NVIC_ISPR_SETPEND5_SHIFT                 5
#define NVIC_ISPR_SETPEND6_MASK                  0x40u
#define NVIC_ISPR_SETPEND6_SHIFT                 6
#define NVIC_ISPR_SETPEND7_MASK                  0x80u
#define NVIC_ISPR_SETPEND7_SHIFT                 7
#define NVIC_ISPR_SETPEND8_MASK                  0x100u
#define NVIC_ISPR_SETPEND8_SHIFT                 8
#define NVIC_ISPR_SETPEND9_MASK                  0x200u
#define NVIC_ISPR_SETPEND9_SHIFT                 9
#define NVIC_ISPR_SETPEND10_MASK                 0x400u
#define NVIC_ISPR_SETPEND10_SHIFT                10
#define NVIC_ISPR_SETPEND11_MASK                 0x800u
#define NVIC_ISPR_SETPEND11_SHIFT                11
#define NVIC_ISPR_SETPEND12_MASK                 0x1000u
#define NVIC_ISPR_SETPEND12_SHIFT                12
#define NVIC_ISPR_SETPEND13_MASK                 0x2000u
#define NVIC_ISPR_SETPEND13_SHIFT                13
#define NVIC_ISPR_SETPEND14_MASK                 0x4000u
#define NVIC_ISPR_SETPEND14_SHIFT                14
#define NVIC_ISPR_SETPEND15_MASK                 0x8000u
#define NVIC_ISPR_SETPEND15_SHIFT                15
#define NVIC_ISPR_SETPEND16_MASK                 0x10000u
#define NVIC_ISPR_SETPEND16_SHIFT                16
#define NVIC_ISPR_SETPEND17_MASK                 0x20000u
#define NVIC_ISPR_SETPEND17_SHIFT                17
#define NVIC_ISPR_SETPEND18_MASK                 0x40000u
#define NVIC_ISPR_SETPEND18_SHIFT                18
#define NVIC_ISPR_SETPEND19_MASK                 0x80000u
#define NVIC_ISPR_SETPEND19_SHIFT                19
#define NVIC_ISPR_SETPEND20_MASK                 0x100000u
#define NVIC_ISPR_SETPEND20_SHIFT                20
#define NVIC_ISPR_SETPEND21_MASK                 0x200000u
#define NVIC_ISPR_SETPEND21_SHIFT                21
#define NVIC_ISPR_SETPEND22_MASK                 0x400000u
#define NVIC_ISPR_SETPEND22_SHIFT                22
#define NVIC_ISPR_SETPEND23_MASK                 0x800000u
#define NVIC_ISPR_SETPEND23_SHIFT                23
#define NVIC_ISPR_SETPEND24_MASK                 0x1000000u
#define NVIC_ISPR_SETPEND24_SHIFT                24
#define NVIC_ISPR_SETPEND25_MASK                 0x2000000u
#define NVIC_ISPR_SETPEND25_SHIFT                25
#define NVIC_ISPR_SETPEND26_MASK                 0x4000000u
#define NVIC_ISPR_SETPEND26_SHIFT                26
#define NVIC_ISPR_SETPEND27_MASK                 0x8000000u
#define NVIC_ISPR_SETPEND27_SHIFT                27
#define NVIC_ISPR_SETPEND28_MASK                 0x10000000u
#define NVIC_ISPR_SETPEND28_SHIFT                28
#define NVIC_ISPR_SETPEND29_MASK                 0x20000000u
#define NVIC_ISPR_SETPEND29_SHIFT                29
#define NVIC_ISPR_SETPEND30_MASK                 0x40000000u
#define NVIC_ISPR_SETPEND30_SHIFT                30
#define NVIC_ISPR_SETPEND31_MASK                 0x80000000u
#define NVIC_ISPR_SETPEND31_SHIFT                31
/* ICPR Bit Fields */
#define NVIC_ICPR_CLRPEND_MASK                   0xFFFFFFFFu
#define NVIC_ICPR_CLRPEND_SHIFT                  0
#define NVIC_ICPR_CLRPEND(x)                     (((uint32_t)(((uint32_t)(x))<<NVIC_ICPR_CLRPEND_SHIFT))&NVIC_ICPR_CLRPEND_MASK)
#define NVIC_ICPR_CLRPEND0_MASK                  0x1u
#define NVIC_ICPR_CLRPEND0_SHIFT                 0
#define NVIC_ICPR_CLRPEND1_MASK                  0x2u
#define NVIC_ICPR_CLRPEND1_SHIFT                 1
#define NVIC_ICPR_CLRPEND2_MASK                  0x4u
#define NVIC_ICPR_CLRPEND2_SHIFT                 2
#define NVIC_ICPR_CLRPEND3_MASK                  0x8u
#define NVIC_ICPR_CLRPEND3_SHIFT                 3
#define NVIC_ICPR_CLRPEND4_MASK                  0x10u
#define NVIC_ICPR_CLRPEND4_SHIFT                 4
#define NVIC_ICPR_CLRPEND5_MASK                  0x20u
#define NVIC_ICPR_CLRPEND5_SHIFT                 5
#define NVIC_ICPR_CLRPEND6_MASK                  0x40u
#define NVIC_ICPR_CLRPEND6_SHIFT                 6
#define NVIC_ICPR_CLRPEND7_MASK                  0x80u
#define NVIC_ICPR_CLRPEND7_SHIFT                 7
#define NVIC_ICPR_CLRPEND8_MASK                  0x100u
#define NVIC_ICPR_CLRPEND8_SHIFT                 8
#define NVIC_ICPR_CLRPEND9_MASK                  0x200u
#define NVIC_ICPR_CLRPEND9_SHIFT                 9
#define NVIC_ICPR_CLRPEND10_MASK                 0x400u
#define NVIC_ICPR_CLRPEND10_SHIFT                10
#define NVIC_ICPR_CLRPEND11_MASK                 0x800u
#define NVIC_ICPR_CLRPEND11_SHIFT                11
#define NVIC_ICPR_CLRPEND12_MASK                 0x1000u
#define NVIC_ICPR_CLRPEND12_SHIFT                12
#define NVIC_ICPR_CLRPEND13_MASK                 0x2000u
#define NVIC_ICPR_CLRPEND13_SHIFT                13
#define NVIC_ICPR_CLRPEND14_MASK                 0x4000u
#define NVIC_ICPR_CLRPEND14_SHIFT                14
#define NVIC_ICPR_CLRPEND15_MASK                 0x8000u
#define NVIC_ICPR_CLRPEND15_SHIFT                15
#define NVIC_ICPR_CLRPEND16_MASK                 0x10000u
#define NVIC_ICPR_CLRPEND16_SHIFT                16
#define NVIC_ICPR_CLRPEND17_MASK                 0x20000u
#define NVIC_ICPR_CLRPEND17_SHIFT                17
#define NVIC_ICPR_CLRPEND18_MASK                 0x40000u
#define NVIC_ICPR_CLRPEND18_SHIFT                18
#define NVIC_ICPR_CLRPEND19_MASK                 0x80000u
#define NVIC_ICPR_CLRPEND19_SHIFT                19
#define NVIC_ICPR_CLRPEND20_MASK                 0x100000u
#define NVIC_ICPR_CLRPEND20_SHIFT                20
#define NVIC_ICPR_CLRPEND21_MASK                 0x200000u
#define NVIC_ICPR_CLRPEND21_SHIFT                21
#define NVIC_ICPR_CLRPEND22_MASK                 0x400000u
#define NVIC_ICPR_CLRPEND22_SHIFT                22
#define NVIC_ICPR_CLRPEND23_MASK                 0x800000u
#define NVIC_ICPR_CLRPEND23_SHIFT                23
#define NVIC_ICPR_CLRPEND24_MASK                 0x1000000u
#define NVIC_ICPR_CLRPEND24_SHIFT                24
#define NVIC_ICPR_CLRPEND25_MASK                 0x2000000u
#define NVIC_ICPR_CLRPEND25_SHIFT                25
#define NVIC_ICPR_CLRPEND26_MASK                 0x4000000u
#define NVIC_ICPR_CLRPEND26_SHIFT                26
#define NVIC_ICPR_CLRPEND27_MASK                 0x8000000u
#define NVIC_ICPR_CLRPEND27_SHIFT                27
#define NVIC_ICPR_CLRPEND28_MASK                 0x10000000u
#define NVIC_ICPR_CLRPEND28_SHIFT                28
#define NVIC_ICPR_CLRPEND29_MASK                 0x20000000u
#define NVIC_ICPR_CLRPEND29_SHIFT                29
#define NVIC_ICPR_CLRPEND30_MASK                 0x40000000u
#define NVIC_ICPR_CLRPEND30_SHIFT                30
#define NVIC_ICPR_CLRPEND31_MASK                 0x80000000u
#define NVIC_ICPR_CLRPEND31_SHIFT                31
/* IP Bit Fields */
#define NVIC_IP_PRI_0_MASK                       0xFFu
#define NVIC_IP_PRI_0_SHIFT                      0
#define NVIC_IP_PRI_0(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_0_SHIFT))&NVIC_IP_PRI_0_MASK)
#define NVIC_IP_PRI_28_MASK                      0xFFu
#define NVIC_IP_PRI_28_SHIFT                     0
#define NVIC_IP_PRI_28(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_28_SHIFT))&NVIC_IP_PRI_28_MASK)
#define NVIC_IP_PRI_24_MASK                      0xFFu
#define NVIC_IP_PRI_24_SHIFT                     0
#define NVIC_IP_PRI_24(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_24_SHIFT))&NVIC_IP_PRI_24_MASK)
#define NVIC_IP_PRI_20_MASK                      0xFFu
#define NVIC_IP_PRI_20_SHIFT                     0
#define NVIC_IP_PRI_20(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_20_SHIFT))&NVIC_IP_PRI_20_MASK)
#define NVIC_IP_PRI_4_MASK                       0xFFu
#define NVIC_IP_PRI_4_SHIFT                      0
#define NVIC_IP_PRI_4(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_4_SHIFT))&NVIC_IP_PRI_4_MASK)
#define NVIC_IP_PRI_16_MASK                      0xFFu
#define NVIC_IP_PRI_16_SHIFT                     0
#define NVIC_IP_PRI_16(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_16_SHIFT))&NVIC_IP_PRI_16_MASK)
#define NVIC_IP_PRI_12_MASK                      0xFFu
#define NVIC_IP_PRI_12_SHIFT                     0
#define NVIC_IP_PRI_12(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_12_SHIFT))&NVIC_IP_PRI_12_MASK)
#define NVIC_IP_PRI_8_MASK                       0xFFu
#define NVIC_IP_PRI_8_SHIFT                      0
#define NVIC_IP_PRI_8(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_8_SHIFT))&NVIC_IP_PRI_8_MASK)
#define NVIC_IP_PRI_13_MASK                      0xFF00u
#define NVIC_IP_PRI_13_SHIFT                     8
#define NVIC_IP_PRI_13(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_13_SHIFT))&NVIC_IP_PRI_13_MASK)
#define NVIC_IP_PRI_21_MASK                      0xFF00u
#define NVIC_IP_PRI_21_SHIFT                     8
#define NVIC_IP_PRI_21(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_21_SHIFT))&NVIC_IP_PRI_21_MASK)
#define NVIC_IP_PRI_29_MASK                      0xFF00u
#define NVIC_IP_PRI_29_SHIFT                     8
#define NVIC_IP_PRI_29(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_29_SHIFT))&NVIC_IP_PRI_29_MASK)
#define NVIC_IP_PRI_1_MASK                       0xFF00u
#define NVIC_IP_PRI_1_SHIFT                      8
#define NVIC_IP_PRI_1(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_1_SHIFT))&NVIC_IP_PRI_1_MASK)
#define NVIC_IP_PRI_9_MASK                       0xFF00u
#define NVIC_IP_PRI_9_SHIFT                      8
#define NVIC_IP_PRI_9(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_9_SHIFT))&NVIC_IP_PRI_9_MASK)
#define NVIC_IP_PRI_17_MASK                      0xFF00u
#define NVIC_IP_PRI_17_SHIFT                     8
#define NVIC_IP_PRI_17(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_17_SHIFT))&NVIC_IP_PRI_17_MASK)
#define NVIC_IP_PRI_25_MASK                      0xFF00u
#define NVIC_IP_PRI_25_SHIFT                     8
#define NVIC_IP_PRI_25(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_25_SHIFT))&NVIC_IP_PRI_25_MASK)
#define NVIC_IP_PRI_5_MASK                       0xFF00u
#define NVIC_IP_PRI_5_SHIFT                      8
#define NVIC_IP_PRI_5(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_5_SHIFT))&NVIC_IP_PRI_5_MASK)
#define NVIC_IP_PRI_2_MASK                       0xFF0000u
#define NVIC_IP_PRI_2_SHIFT                      16
#define NVIC_IP_PRI_2(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_2_SHIFT))&NVIC_IP_PRI_2_MASK)
#define NVIC_IP_PRI_26_MASK                      0xFF0000u
#define NVIC_IP_PRI_26_SHIFT                     16
#define NVIC_IP_PRI_26(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_26_SHIFT))&NVIC_IP_PRI_26_MASK)
#define NVIC_IP_PRI_18_MASK                      0xFF0000u
#define NVIC_IP_PRI_18_SHIFT                     16
#define NVIC_IP_PRI_18(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_18_SHIFT))&NVIC_IP_PRI_18_MASK)
#define NVIC_IP_PRI_14_MASK                      0xFF0000u
#define NVIC_IP_PRI_14_SHIFT                     16
#define NVIC_IP_PRI_14(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_14_SHIFT))&NVIC_IP_PRI_14_MASK)
#define NVIC_IP_PRI_6_MASK                       0xFF0000u
#define NVIC_IP_PRI_6_SHIFT                      16
#define NVIC_IP_PRI_6(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_6_SHIFT))&NVIC_IP_PRI_6_MASK)
#define NVIC_IP_PRI_30_MASK                      0xFF0000u
#define NVIC_IP_PRI_30_SHIFT                     16
#define NVIC_IP_PRI_30(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_30_SHIFT))&NVIC_IP_PRI_30_MASK)
#define NVIC_IP_PRI_22_MASK                      0xFF0000u
#define NVIC_IP_PRI_22_SHIFT                     16
#define NVIC_IP_PRI_22(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_22_SHIFT))&NVIC_IP_PRI_22_MASK)
#define NVIC_IP_PRI_10_MASK                      0xFF0000u
#define NVIC_IP_PRI_10_SHIFT                     16
#define NVIC_IP_PRI_10(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_10_SHIFT))&NVIC_IP_PRI_10_MASK)
#define NVIC_IP_PRI_31_MASK                      0xFF000000u
#define NVIC_IP_PRI_31_SHIFT                     24
#define NVIC_IP_PRI_31(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_31_SHIFT))&NVIC_IP_PRI_31_MASK)
#define NVIC_IP_PRI_27_MASK                      0xFF000000u
#define NVIC_IP_PRI_27_SHIFT                     24
#define NVIC_IP_PRI_27(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_27_SHIFT))&NVIC_IP_PRI_27_MASK)
#define NVIC_IP_PRI_23_MASK                      0xFF000000u
#define NVIC_IP_PRI_23_SHIFT                     24
#define NVIC_IP_PRI_23(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_23_SHIFT))&NVIC_IP_PRI_23_MASK)
#define NVIC_IP_PRI_3_MASK                       0xFF000000u
#define NVIC_IP_PRI_3_SHIFT                      24
#define NVIC_IP_PRI_3(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_3_SHIFT))&NVIC_IP_PRI_3_MASK)
#define NVIC_IP_PRI_19_MASK                      0xFF000000u
#define NVIC_IP_PRI_19_SHIFT                     24
#define NVIC_IP_PRI_19(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_19_SHIFT))&NVIC_IP_PRI_19_MASK)
#define NVIC_IP_PRI_15_MASK                      0xFF000000u
#define NVIC_IP_PRI_15_SHIFT                     24
#define NVIC_IP_PRI_15(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_15_SHIFT))&NVIC_IP_PRI_15_MASK)
#define NVIC_IP_PRI_11_MASK                      0xFF000000u
#define NVIC_IP_PRI_11_SHIFT                     24
#define NVIC_IP_PRI_11(x)                        (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_11_SHIFT))&NVIC_IP_PRI_11_MASK)
#define NVIC_IP_PRI_7_MASK                       0xFF000000u
#define NVIC_IP_PRI_7_SHIFT                      24
#define NVIC_IP_PRI_7(x)                         (((uint32_t)(((uint32_t)(x))<<NVIC_IP_PRI_7_SHIFT))&NVIC_IP_PRI_7_MASK)

/*!
 * @}
 */ /* end of group NVIC_Register_Masks */


/* NVIC - Peripheral instance base addresses */
/** Peripheral NVIC base pointer */
#define NVIC_BASE_PTR                            (NVIC)
/** Array initializer of NVIC peripheral base pointers */
#define NVIC_BASE_PTRS                           { NVIC_BASE_PTR }

/* ----------------------------------------------------------------------------
   -- NVIC - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup NVIC_Register_Accessor_Macros NVIC - Register accessor macros
 * @{
 */


/* NVIC - Register instance definitions */
/* NVIC */
#define NVIC_ISER                                NVIC_ISER_REG(NVIC_BASE_PTR)
#define NVIC_ICER                                NVIC_ICER_REG(NVIC_BASE_PTR)
#define NVIC_ISPR                                NVIC_ISPR_REG(NVIC_BASE_PTR)
#define NVIC_ICPR                                NVIC_ICPR_REG(NVIC_BASE_PTR)
#define NVIC_IPR0                                NVIC_IP_REG(NVIC_BASE_PTR,0)
#define NVIC_IPR1                                NVIC_IP_REG(NVIC_BASE_PTR,1)
#define NVIC_IPR2                                NVIC_IP_REG(NVIC_BASE_PTR,2)
#define NVIC_IPR3                                NVIC_IP_REG(NVIC_BASE_PTR,3)
#define NVIC_IPR4                                NVIC_IP_REG(NVIC_BASE_PTR,4)
#define NVIC_IPR5                                NVIC_IP_REG(NVIC_BASE_PTR,5)
#define NVIC_IPR6                                NVIC_IP_REG(NVIC_BASE_PTR,6)
#define NVIC_IPR7                                NVIC_IP_REG(NVIC_BASE_PTR,7)

/* NVIC - Register array accessors */
#define NVIC_IP(index)                           NVIC_IP_REG(NVIC_BASE_PTR,index)

/*!
 * @}
 */ /* end of group NVIC_Register_Accessor_Macros */


/*!
 * @}
 */ /* end of group NVIC_Peripheral */

 /* ----------------------------------------------------------------------------
   -- SCB
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Peripheral SCB
 * @{
 */

/* ----------------------------------------------------------------------------
   -- SCB - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Register_Accessor_Macros SCB - Register accessor macros
 * @{
 */


/* SCB - Register accessors */
/*#define SCB_ACTLR_REG(base)                      ((base)->ACTLR) NOT SUPPORTED*/
#define SCB_CPUID_REG(base)                      ((base)->CPUID)
#define SCB_ICSR_REG(base)                       ((base)->ICSR)
#define SCB_VTOR_REG(base)                       ((base)->VTOR)
#define SCB_AIRCR_REG(base)                      ((base)->AIRCR)
#define SCB_SCR_REG(base)                        ((base)->SCR)
#define SCB_CCR_REG(base)                        ((base)->CCR)
#define SCB_SHPR2_REG(base)                      ((base)->SHP[0])
#define SCB_SHPR3_REG(base)                      ((base)->SHP[1])
#define SCB_SHCSR_REG(base)                      ((base)->SHCSR)
/*#define SCB_DFSR_REG(base)                       ((base)->DFSR) NOT SUPPORTED*/

/*!
 * @}
 */ /* end of group SCB_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- SCB Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Register_Masks SCB Register Masks
 * @{
 */

/* CPUID Bit Fields */
#define SCB_CPUID_REVISION_MASK                  0xFu
#define SCB_CPUID_REVISION_SHIFT                 0
#define SCB_CPUID_REVISION(x)                    (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_REVISION_SHIFT))&SCB_CPUID_REVISION_MASK)
#define SCB_CPUID_PARTNO_MASK                    0xFFF0u
#define SCB_CPUID_PARTNO_SHIFT                   4
#define SCB_CPUID_PARTNO(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_PARTNO_SHIFT))&SCB_CPUID_PARTNO_MASK)
#define SCB_CPUID_VARIANT_MASK                   0xF00000u
#define SCB_CPUID_VARIANT_SHIFT                  20
#define SCB_CPUID_VARIANT(x)                     (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_VARIANT_SHIFT))&SCB_CPUID_VARIANT_MASK)
#define SCB_CPUID_IMPLEMENTER_MASK               0xFF000000u
#define SCB_CPUID_IMPLEMENTER_SHIFT              24
#define SCB_CPUID_IMPLEMENTER(x)                 (((uint32_t)(((uint32_t)(x))<<SCB_CPUID_IMPLEMENTER_SHIFT))&SCB_CPUID_IMPLEMENTER_MASK)
/* ICSR Bit Fields */
#define SCB_ICSR_VECTACTIVE_MASK                 0x3Fu
#define SCB_ICSR_VECTACTIVE_SHIFT                0
#define SCB_ICSR_VECTACTIVE(x)                   (((uint32_t)(((uint32_t)(x))<<SCB_ICSR_VECTACTIVE_SHIFT))&SCB_ICSR_VECTACTIVE_MASK)
#define SCB_ICSR_VECTPENDING_MASK                0x3F000u
#define SCB_ICSR_VECTPENDING_SHIFT               12
#define SCB_ICSR_VECTPENDING(x)                  (((uint32_t)(((uint32_t)(x))<<SCB_ICSR_VECTPENDING_SHIFT))&SCB_ICSR_VECTPENDING_MASK)
#define SCB_ICSR_ISRPENDING_MASK                 0x400000u
#define SCB_ICSR_ISRPENDING_SHIFT                22
#define SCB_ICSR_PENDSTCLR_MASK                  0x2000000u
#define SCB_ICSR_PENDSTCLR_SHIFT                 25
#define SCB_ICSR_PENDSTSET_MASK                  0x4000000u
#define SCB_ICSR_PENDSTSET_SHIFT                 26
#define SCB_ICSR_PENDSVCLR_MASK                  0x8000000u
#define SCB_ICSR_PENDSVCLR_SHIFT                 27
#define SCB_ICSR_PENDSVSET_MASK                  0x10000000u
#define SCB_ICSR_PENDSVSET_SHIFT                 28
#define SCB_ICSR_NMIPENDSET_MASK                 0x80000000u
#define SCB_ICSR_NMIPENDSET_SHIFT                31
/* VTOR Bit Fields */
#define SCB_VTOR_TBLOFF_MASK                     0xFFFFFF80u
#define SCB_VTOR_TBLOFF_SHIFT                    7
#define SCB_VTOR_TBLOFF(x)                       (((uint32_t)(((uint32_t)(x))<<SCB_VTOR_TBLOFF_SHIFT))&SCB_VTOR_TBLOFF_MASK)
/* AIRCR Bit Fields */
#define SCB_AIRCR_VECTCLRACTIVE_MASK             0x2u
#define SCB_AIRCR_VECTCLRACTIVE_SHIFT            1
#define SCB_AIRCR_SYSRESETREQ_MASK               0x4u
#define SCB_AIRCR_SYSRESETREQ_SHIFT              2
#define SCB_AIRCR_ENDIANNESS_MASK                0x8000u
#define SCB_AIRCR_ENDIANNESS_SHIFT               15
#define SCB_AIRCR_VECTKEY_MASK                   0xFFFF0000u
#define SCB_AIRCR_VECTKEY_SHIFT                  16
#define SCB_AIRCR_VECTKEY(x)                     (((uint32_t)(((uint32_t)(x))<<SCB_AIRCR_VECTKEY_SHIFT))&SCB_AIRCR_VECTKEY_MASK)
/* SCR Bit Fields */
#define SCB_SCR_SLEEPONEXIT_MASK                 0x2u
#define SCB_SCR_SLEEPONEXIT_SHIFT                1
#define SCB_SCR_SLEEPDEEP_MASK                   0x4u
#define SCB_SCR_SLEEPDEEP_SHIFT                  2
#define SCB_SCR_SEVONPEND_MASK                   0x10u
#define SCB_SCR_SEVONPEND_SHIFT                  4
/* CCR Bit Fields */
#define SCB_CCR_UNALIGN_TRP_MASK                 0x8u
#define SCB_CCR_UNALIGN_TRP_SHIFT                3
#define SCB_CCR_STKALIGN_MASK                    0x200u
#define SCB_CCR_STKALIGN_SHIFT                   9
/* SHPR2 Bit Fields */
#define SCB_SHPR2_PRI_11_MASK                    0xFF000000u
#define SCB_SHPR2_PRI_11_SHIFT                   24
#define SCB_SHPR2_PRI_11(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_SHPR2_PRI_11_SHIFT))&SCB_SHPR2_PRI_11_MASK)
/* SHPR3 Bit Fields */
#define SCB_SHPR3_PRI_14_MASK                    0xFF0000u
#define SCB_SHPR3_PRI_14_SHIFT                   16
#define SCB_SHPR3_PRI_14(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_SHPR3_PRI_14_SHIFT))&SCB_SHPR3_PRI_14_MASK)
#define SCB_SHPR3_PRI_15_MASK                    0xFF000000u
#define SCB_SHPR3_PRI_15_SHIFT                   24
#define SCB_SHPR3_PRI_15(x)                      (((uint32_t)(((uint32_t)(x))<<SCB_SHPR3_PRI_15_SHIFT))&SCB_SHPR3_PRI_15_MASK)
/* SHCSR Bit Fields */
#define SCB_SHCSR_SVCALLPENDED_MASK              0x8000u
#define SCB_SHCSR_SVCALLPENDED_SHIFT             15
/* DFSR Bit Fields */
#define SCB_DFSR_HALTED_MASK                     0x1u
#define SCB_DFSR_HALTED_SHIFT                    0
#define SCB_DFSR_BKPT_MASK                       0x2u
#define SCB_DFSR_BKPT_SHIFT                      1
#define SCB_DFSR_DWTTRAP_MASK                    0x4u
#define SCB_DFSR_DWTTRAP_SHIFT                   2
#define SCB_DFSR_VCATCH_MASK                     0x8u
#define SCB_DFSR_VCATCH_SHIFT                    3
#define SCB_DFSR_EXTERNAL_MASK                   0x10u
#define SCB_DFSR_EXTERNAL_SHIFT                  4

/*!
 * @}
 */ /* end of group SCB_Register_Masks */


/* SCB - Peripheral instance base addresses */
/** Peripheral SystemControl base pointer */
#define SystemControl_BASE_PTR                   (SCB)
/** Array initializer of SCB peripheral base pointers */
#define SCB_BASE_PTRS                            { SystemControl_BASE_PTR }

/* ----------------------------------------------------------------------------
   -- SCB - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SCB_Register_Accessor_Macros SCB - Register accessor macros
 * @{
 */


/* SCB - Register instance definitions */
/* SystemControl */
#define SCB_ACTLR                                SCB_ACTLR_REG(SystemControl_BASE_PTR)
#define SCB_CPUID                                SCB_CPUID_REG(SystemControl_BASE_PTR)
#define SCB_ICSR                                 SCB_ICSR_REG(SystemControl_BASE_PTR)
#define SCB_VTOR                                 SCB_VTOR_REG(SystemControl_BASE_PTR)
#define SCB_AIRCR                                SCB_AIRCR_REG(SystemControl_BASE_PTR)
#define SCB_SCR                                  SCB_SCR_REG(SystemControl_BASE_PTR)
#define SCB_CCR                                  SCB_CCR_REG(SystemControl_BASE_PTR)
#define SCB_SHPR2                                SCB_SHPR2_REG(SystemControl_BASE_PTR)
#define SCB_SHPR3                                SCB_SHPR3_REG(SystemControl_BASE_PTR)
#define SCB_SHCSR                                SCB_SHCSR_REG(SystemControl_BASE_PTR)
#define SCB_DFSR                                 SCB_DFSR_REG(SystemControl_BASE_PTR)

/*!
 * @}
 */ /* end of group SCB_Register_Accessor_Macros */


/*!
 * @}
 */ /* end of group SCB_Peripheral */

/* ----------------------------------------------------------------------------
   -- SysTick
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Peripheral SysTick
 * @{
 */

/** SysTick - Peripheral register structure */
typedef struct SysTick_MemMap {
  uint32_t CSR;                                    /**< SysTick Control and Status Register, offset: 0x0 */
  uint32_t RVR;                                    /**< SysTick Reload Value Register, offset: 0x4 */
  uint32_t CVR;                                    /**< SysTick Current Value Register, offset: 0x8 */
  uint32_t CALIB;                                  /**< SysTick Calibration Value Register, offset: 0xC */
} volatile *SysTick_MemMapPtr;

/* ----------------------------------------------------------------------------
   -- SysTick - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Register_Accessor_Macros SysTick - Register accessor macros
 * @{
 */


/* SysTick - Register accessors */
#define SysTick_CSR_REG(base)                    ((base)->CTRL)
#define SysTick_RVR_REG(base)                    ((base)->LOAD)
#define SysTick_CVR_REG(base)                    ((base)->VAL)
#define SysTick_CALIB_REG(base)                  ((base)->CALIB)

/*!
 * @}
 */ /* end of group SysTick_Register_Accessor_Macros */


/* ----------------------------------------------------------------------------
   -- SysTick Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Register_Masks SysTick Register Masks
 * @{
 */

/* CSR Bit Fields */
#define SysTick_CSR_ENABLE_MASK                  0x1u
#define SysTick_CSR_ENABLE_SHIFT                 0
#define SysTick_CSR_TICKINT_MASK                 0x2u
#define SysTick_CSR_TICKINT_SHIFT                1
#define SysTick_CSR_CLKSOURCE_MASK               0x4u
#define SysTick_CSR_CLKSOURCE_SHIFT              2
#define SysTick_CSR_COUNTFLAG_MASK               0x10000u
#define SysTick_CSR_COUNTFLAG_SHIFT              16
/* RVR Bit Fields */
#define SysTick_RVR_RELOAD_MASK                  0xFFFFFFu
#define SysTick_RVR_RELOAD_SHIFT                 0
#define SysTick_RVR_RELOAD(x)                    (((uint32_t)(((uint32_t)(x))<<SysTick_RVR_RELOAD_SHIFT))&SysTick_RVR_RELOAD_MASK)
/* CVR Bit Fields */
#define SysTick_CVR_CURRENT_MASK                 0xFFFFFFu
#define SysTick_CVR_CURRENT_SHIFT                0
#define SysTick_CVR_CURRENT(x)                   (((uint32_t)(((uint32_t)(x))<<SysTick_CVR_CURRENT_SHIFT))&SysTick_CVR_CURRENT_MASK)
/* CALIB Bit Fields */
#define SysTick_CALIB_TENMS_MASK                 0xFFFFFFu
#define SysTick_CALIB_TENMS_SHIFT                0
#define SysTick_CALIB_TENMS(x)                   (((uint32_t)(((uint32_t)(x))<<SysTick_CALIB_TENMS_SHIFT))&SysTick_CALIB_TENMS_MASK)
#define SysTick_CALIB_SKEW_MASK                  0x40000000u
#define SysTick_CALIB_SKEW_SHIFT                 30
#define SysTick_CALIB_NOREF_MASK                 0x80000000u
#define SysTick_CALIB_NOREF_SHIFT                31

/*!
 * @}
 */ /* end of group SysTick_Register_Masks */


/* SysTick - Peripheral instance base addresses */
/** Peripheral SysTick base pointer */
#define SysTick_BASE_PTR                         (SysTick)
/** Array initializer of SysTick peripheral base pointers */
#define SysTick_BASE_PTRS                        { SysTick_BASE_PTR }

/* ----------------------------------------------------------------------------
   -- SysTick - Register accessor macros
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SysTick_Register_Accessor_Macros SysTick - Register accessor macros
 * @{
 */


/* SysTick - Register instance definitions */
/* SysTick */
#define SYST_CSR                                 SysTick_CSR_REG(SysTick_BASE_PTR)
#define SYST_RVR                                 SysTick_RVR_REG(SysTick_BASE_PTR)
#define SYST_CVR                                 SysTick_CVR_REG(SysTick_BASE_PTR)
#define SYST_CALIB                               SysTick_CALIB_REG(SysTick_BASE_PTR)

/*!
 * @}
 */ /* end of group SysTick_Register_Accessor_Macros */


/*!
 * @}
 */ /* end of group SysTick_Peripheral */



#endif /* __PEx_CORE_CM4_H */
