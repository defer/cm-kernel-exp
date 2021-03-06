/* linux/arch/arm/mach-s5pv210/include/mach/map.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - Memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MAP_H
#define __ASM_ARCH_MAP_H __FILE__

#include <plat/map-base.h>
#include <plat/map-s5p.h>

#define S5PC110_PA_ONENAND	(0xB0000000)
#define S5PC110_PA_ONENAND_DMA	(0xB0600000)

#define S5PV210_PA_CHIPID	(0xE0000000)
#define S5P_PA_CHIPID		S5PV210_PA_CHIPID

#define S5PV210_PA_SYSCON	(0xE0100000)
#define S5P_PA_SYSCON		S5PV210_PA_SYSCON

#define S5PV210_PA_GPIO		(0xE0200000)
#define S5P_PA_GPIO		S5PV210_PA_GPIO

/* SPI */
#define S5PV210_PA_SPI0		0xE1300000
#define S5PV210_PA_SPI1		0xE1400000

#define S5PV210_PA_IIC0		(0xE1800000)
#define S5PV210_PA_IIC1		(0xFAB00000)
#define S5PV210_PA_IIC2		(0xE1A00000)

#define S5PV210_PA_TIMER	(0xE2500000)
#define S5P_PA_TIMER		S5PV210_PA_TIMER

#define S5PV210_PA_SYSTIMER	(0xE2600000)

#define S5PV210_PA_WATCHDOG	(0xE2700000)

#define S5PV210_PA_UART		(0xE2900000)

#define S5P_PA_UART0		(S5PV210_PA_UART + 0x0)
#define S5P_PA_UART1		(S5PV210_PA_UART + 0x400)
#define S5P_PA_UART2		(S5PV210_PA_UART + 0x800)
#define S5P_PA_UART3		(S5PV210_PA_UART + 0xC00)

#define S5P_SZ_UART		SZ_256

#define S5PV210_PA_SROMC	(0xE8000000)

#define S5PV210_PA_MDMA		0xFA200000
#define S5PV210_PA_PDMA0	0xE0900000
#define S5PV210_PA_PDMA1	0xE0A00000

#define S5PV210_PA_FB		(0xF8000000)

#define S5PV210_PA_HSMMC(x)	(0xEB000000 + ((x) * 0x100000))

#define S5PV210_PA_VIC0		(0xF2000000)
#define S5P_PA_VIC0		S5PV210_PA_VIC0

#define S5PV210_PA_VIC1		(0xF2100000)
#define S5P_PA_VIC1		S5PV210_PA_VIC1

#define S5PV210_PA_VIC2		(0xF2200000)
#define S5P_PA_VIC2		S5PV210_PA_VIC2

#define S5PV210_PA_VIC3		(0xF2300000)
#define S5P_PA_VIC3		S5PV210_PA_VIC3

#define S5PV210_PA_SDRAM	(0x20000000)
#define S5P_PA_SDRAM		S5PV210_PA_SDRAM

/* I2S */
#define S5PV210_PA_IIS0		0xEEE30000
#define S5PV210_PA_IIS1		0xE2100000
#define S5PV210_PA_IIS2		0xE2A00000

/* PCM */
#define S5PV210_PA_PCM0		0xE2300000
#define S5PV210_PA_PCM1		0xE1200000
#define S5PV210_PA_PCM2		0xE2B00000

/* AC97 */
#define S5PV210_PA_AC97		0xE2200000

#define S5PV210_PA_ADC		(0xE1700000)

/* compatibiltiy defines. */
#define S3C_PA_UART		S5PV210_PA_UART
#define S3C_PA_HSMMC0		S5PV210_PA_HSMMC(0)
#define S3C_PA_HSMMC1		S5PV210_PA_HSMMC(1)
#define S3C_PA_HSMMC2		S5PV210_PA_HSMMC(2)
#define S3C_PA_IIC		S5PV210_PA_IIC0
#define S3C_PA_IIC1		S5PV210_PA_IIC1
#define S3C_PA_IIC2		S5PV210_PA_IIC2
#define S3C_PA_FB		S5PV210_PA_FB
#define S3C_PA_WDT		S5PV210_PA_WATCHDOG

#define SAMSUNG_PA_ADC		S5PV210_PA_ADC

#endif /* __ASM_ARCH_MAP_H */
