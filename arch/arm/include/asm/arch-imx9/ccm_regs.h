/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2022 NXP
 */

#ifndef __ASM_ARCH_IMX9_CCM_REGS_H__
#define __ASM_ARCH_IMX9_CCM_REGS_H__
#define IMX93_CLK_ROOT_MAX	95
#define IMX93_CLK_CCGR_MAX	127

#define ARM_A55_PERIPH_CLK_ROOT		0
#define ARM_A55_MTR_BUS_CLK_ROOT	1
#define ARM_A55_CLK_ROOT		2
#define M33_CLK_ROOT			3
#define ELE_CLK_ROOT			4
#define BUS_WAKEUP_CLK_ROOT		5
#define BUS_AON_CLK_ROOT		6
#define WAKEUP_AXI_CLK_ROOT		7
#define SWO_TRACE_CLK_ROOT		8
#define M33_SYSTICK_CLK_ROOT		9
#define FLEXIO1_CLK_ROOT		10
#define FLEXIO2_CLK_ROOT		11
#define LPIT1_CLK_ROOT			12
#define LPIT2_CLK_ROOT			13
#define LPTMR1_CLK_ROOT			14
#define LPTMR2_CLK_ROOT			15
#define TPM1_CLK_ROOT			16
#define TPM2_CLK_ROOT			17
#define TPM3_CLK_ROOT			18
#define TPM4_CLK_ROOT			19
#define TPM5_CLK_ROOT			20
#define TPM6_CLK_ROOT			21
#define FLEXSPI1_CLK_ROOT		22
#define CAN1_CLK_ROOT			23
#define CAN2_CLK_ROOT			24
#define LPUART1_CLK_ROOT		25
#define LPUART2_CLK_ROOT		26
#define LPUART3_CLK_ROOT		27
#define LPUART4_CLK_ROOT		28
#define LPUART5_CLK_ROOT		29
#define LPUART6_CLK_ROOT		30
#define LPUART7_CLK_ROOT		31
#define LPUART8_CLK_ROOT		32
#define LPI2C1_CLK_ROOT			33
#define LPI2C2_CLK_ROOT			34
#define LPI2C3_CLK_ROOT			35
#define LPI2C4_CLK_ROOT			36
#define LPI2C5_CLK_ROOT			37
#define LPI2C6_CLK_ROOT			38
#define LPI2C7_CLK_ROOT			39
#define LPI2C8_CLK_ROOT			40
#define LPSPI1_CLK_ROOT			41
#define LPSPI2_CLK_ROOT			42
#define LPSPI3_CLK_ROOT			43
#define LPSPI4_CLK_ROOT			44
#define LPSPI5_CLK_ROOT			45
#define LPSPI6_CLK_ROOT			46
#define LPSPI7_CLK_ROOT			47
#define LPSPI8_CLK_ROOT			48
#define I3C1_CLK_ROOT			49
#define I3C2_CLK_ROOT			50
#define USDHC1_CLK_ROOT			51
#define USDHC2_CLK_ROOT			52
#define USDHC3_CLK_ROOT			53
#define SAI1_CLK_ROOT			54
#define SAI2_CLK_ROOT			55
#define SAI3_CLK_ROOT			56
#define CCM_CKO1_CLK_ROOT		57
#define CCM_CKO2_CLK_ROOT		58
#define CCM_CKO3_CLK_ROOT		59
#define CCM_CKO4_CLK_ROOT		60
#define HSIO_CLK_ROOT			61
#define HSIO_USB_TEST_60M_CLK_ROOT	62
#define HSIO_ACSCAN_80M_CLK_ROOT	63
#define HSIO_ACSCAN_480M_CLK_ROOT	64
#define NIC_CLK_ROOT			65
#define NIC_APB_CLK_ROOT		66
#define ML_APB_CLK_ROOT			67
#define ML_CLK_ROOT			68
#define MEDIA_AXI_CLK_ROOT		69
#define MEDIA_APB_CLK_ROOT		70
#define MEDIA_LDB_CLK_ROOT		71
#define MEDIA_DISP_PIX_CLK_ROOT		72
#define CAM_PIX_CLK_ROOT		73
#define MIPI_TEST_BYTE_CLK_ROOT		74
#define MIPI_PHY_CFG_CLK_ROOT		75
#define DRAM_ALT_CLK_ROOT		76
#define DRAM_APB_CLK_ROOT		77
#define ADC_CLK_ROOT			78
#define PDM_CLK_ROOT			79
#define TSTMR1_CLK_ROOT			80
#define TSTMR2_CLK_ROOT			81
#define MQS1_CLK_ROOT			82
#define MQS2_CLK_ROOT			83
#define AUDIO_XCVR_CLK_ROOT		84
#define SPDIF_CLK_ROOT			85
#define ENET_CLK_ROOT			86
#define ENET_TIMER1_CLK_ROOT		87
#define ENET_TIMER2_CLK_ROOT		88
#define ENET_REF_CLK_ROOT		89
#define ENET_REF_PHY_CLK_ROOT		90
#define I3C1_SLOW_CLK_ROOT		91
#define I3C2_SLOW_CLK_ROOT		92
#define USB_PHY_BURUNIN_CLK_ROOT	93
#define PAL_CAME_SCAN_CLK_ROOT	94
#define CLK_ROOT_NUM			95

#define CCGR_A55	0
#define CCGR_CM33	1
#define CCGR_ARMTROUT	2
#define CCGR_SENT	3
#define CCGR_BUSM	4
#define CCGR_BUS7	5
#define CCGR_BUSD	6
#define CCGR_ANAD	7
#define CCGR_SRC	8
#define CCGR_CCM	9
#define CCGR_GPC	10
#define CCGR_ADC	11
#define CCGR_WDG1	12
#define CCGR_WDG2	13
#define CCGR_WDG3	14
#define CCGR_WDG4	15
#define CCGR_WDG5	16
#define CCGR_SEM1	17
#define CCGR_SEM2	18
#define CCGR_MUA	19
#define CCGR_MUB	20
#define CCGR_DMA1	21
#define CCGR_DMA2	22
#define CCGR_ROMCA55	23
#define CCGR_ROMCM33	24
#define CCGR_QSP1	25
#define CCGR_AONRDC	26
#define CCGR_WKUPRDC	27
#define CCGR_FUSE	28
#define CCGR_SNVH	29
#define CCGR_SNVS	30
#define CCGR_TRAC	31
#define CCGR_SWO	32
#define CCGR_IOCG	33
#define CCGR_PIO1	34
#define CCGR_PIO2	35
#define CCGR_PIO3	36
#define CCGR_PIO4	37
#define CCGR_FIO1	38
#define CCGR_FIO2	39
#define CCGR_PIT1	40
#define CCGR_PIT2	41
#define CCGR_GPT1	42
#define CCGR_GPT2	43
#define CCGR_TPM1	44
#define CCGR_TPM2	45
#define CCGR_TPM3	46
#define CCGR_TPM4	47
#define CCGR_TPM5	48
#define CCGR_TPM6	49
#define CCGR_CAN1	50
#define CCGR_CAN2	51
#define CCGR_URT1	52
#define CCGR_URT2	53
#define CCGR_URT3	54
#define CCGR_URT4	55
#define CCGR_URT5	56
#define CCGR_URT6	57
#define CCGR_URT7	58
#define CCGR_URT8	59
#define CCGR_I2C1	60
#define CCGR_I2C2	61
#define CCGR_I2C3	62
#define CCGR_I2C4	63
#define CCGR_I2C5	64
#define CCGR_I2C6	65
#define CCGR_I2C7	66
#define CCGR_I2C8	67
#define CCGR_SPI1	68
#define CCGR_SPI2	69
#define CCGR_SPI3	70
#define CCGR_SPI4	71
#define CCGR_SPI5	72
#define CCGR_SPI6	73
#define CCGR_SPI7	74
#define CCGR_SPI8	75
#define CCGR_I3C1	76
#define CCGR_I3C2	77
#define CCGR_USDHC1	78
#define CCGR_USDHC2	79
#define CCGR_USDHC3	80
#define CCGR_SAI1	81
#define CCGR_SAI2	82
#define CCGR_SAI3	83
#define CCGR_W2AO	84
#define CCGR_AO2W	85
#define CCGR_MIPIC	86
#define CCGR_MIPID	87
#define CCGR_LVDS	88
#define CCGR_LCDIF	89
#define CCGR_PXP	90
#define CCGR_ISI	91
#define CCGR_NMED	92
#define CCGR_DFI	93
#define CCGR_DDRC	94
#define CCGR_DFIC	95
#define CCGR_DSSI	96
#define CCGR_DBYP	97
#define CCGR_DAPB	98
#define CCGR_DRAMP	99
#define CCGR_DCLKC	100
#define CCGR_NCTL	101
#define CCGR_GIC	102
#define CCGR_NICAPB	103
#define CCGR_USBC	104
#define CCGR_USBT	105
#define CCGR_HSIO	106
#define CCGR_PDM	107
#define CCGR_MQS1	108
#define CCGR_MQS2	109
#define CCGR_AXCVR	110
#define CCGR_MECC	111
#define CCGR_SPDIF	112
#define CCGR_ML2NIC	113
#define CCGR_MED2NIC	114
#define CCGR_HSIO2NIC	115
#define CCGR_W2NIC	116
#define CCGR_NIC2W	117
#define CCGR_NIC2DDR	118
#define CCGR_HSIO32K	119
#define CCGR_ENET1	120
#define CCGR_ENETQOS	121
#define CCGR_SYSCNT	122
#define CCGR_TSTMR1	123
#define CCGR_TSTMR2	124
#define CCGR_TMC	125
#define CCGR_PMRO	126
#define CCGR_NUM	127

#define SHARED_GPR_EXT_CLK 0
#define SHARED_GPR_EXT_CLK_SEL_EXT1 0
#define SHARED_GPR_EXT_CLK_SEL_EXT2 BIT(0)
#define SHARED_GPR_EXT_CLK_SEL_EXT3 BIT(1)
#define SHARED_GPR_EXT_CLK_SEL_EXT4 GENMASK(1, 0)

#define SHARED_GPR_A55_CLK 1
#define SHARED_GPR_A55_CLK_SEL_CCM 0
#define SHARED_GPR_A55_CLK_SEL_PLL BIT(0)

#define SHARED_GPR_DRAM_CLK 2
#define SHARED_GPR_DRAM_CLK_SEL_PLL 0
#define SHARED_GPR_DRAM_CLK_SEL_CCM BIT(0)

#define SHARED_GPR_NUM 8
#define PRIVATE_GPR_NUM 8

#define CLK_ROOT_STATUS_OFF		BIT(24)
#define CLK_ROOT_STATUS_CHANGING	BIT(31)
#define CLK_ROOT_MUX_MASK		GENMASK(9, 8)
#define CLK_ROOT_MUX_SHIFT		8
#define CLK_ROOT_DIV_MASK		GENMASK(7, 0)

#define CCM_AUTHEN_LOCK_TZ		BIT(11)
#define CCM_AUTHEN_TZ_NS		BIT(9)
#define CCM_AUTHEN_TZ_USER		BIT(8)
#define CCM_AUTHEN_CPULPM_MODE	BIT(2)
#define CCM_AUTHEN_AUTO_CTRL	BIT(3)

#endif
