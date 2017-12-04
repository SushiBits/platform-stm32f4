/* This file is auto-generated using the IRQN tool. Do not modify. */

#ifndef IRQN_HANDLER

#include <stm32f4xx_it.h>

#else

IRQN_HANDLER(-14, NonMaskableInt_IRQn)
SKIP_HANLDER(-13)
IRQN_HANDLER(-12, MemoryManagement_IRQn)
IRQN_HANDLER(-11, BusFault_IRQn)
IRQN_HANDLER(-10, UsageFault_IRQn)
SKIP_HANLDER(-9)
SKIP_HANLDER(-8)
SKIP_HANLDER(-7)
SKIP_HANLDER(-6)
IRQN_HANDLER(-5, SVCall_IRQn)
IRQN_HANDLER(-4, DebugMonitor_IRQn)
SKIP_HANLDER(-3)
IRQN_HANDLER(-2, PendSV_IRQn)
IRQN_HANDLER(-1, SysTick_IRQn)
IRQN_HANDLER(0, WWDG_IRQn)
IRQN_HANDLER(1, PVD_IRQn)
IRQN_HANDLER(2, TAMP_STAMP_IRQn)
IRQN_HANDLER(3, RTC_WKUP_IRQn)
IRQN_HANDLER(4, FLASH_IRQn)
IRQN_HANDLER(5, RCC_IRQn)
IRQN_HANDLER(6, EXTI0_IRQn)
IRQN_HANDLER(7, EXTI1_IRQn)
IRQN_HANDLER(8, EXTI2_IRQn)
IRQN_HANDLER(9, EXTI3_IRQn)
IRQN_HANDLER(10, EXTI4_IRQn)
IRQN_HANDLER(11, DMA1_Stream0_IRQn)
IRQN_HANDLER(12, DMA1_Stream1_IRQn)
IRQN_HANDLER(13, DMA1_Stream2_IRQn)
IRQN_HANDLER(14, DMA1_Stream3_IRQn)
IRQN_HANDLER(15, DMA1_Stream4_IRQn)
IRQN_HANDLER(16, DMA1_Stream5_IRQn)
IRQN_HANDLER(17, DMA1_Stream6_IRQn)
IRQN_HANDLER(18, ADC_IRQn)
IRQN_HANDLER(19, CAN1_TX_IRQn)
IRQN_HANDLER(20, CAN1_RX0_IRQn)
IRQN_HANDLER(21, CAN1_RX1_IRQn)
IRQN_HANDLER(22, CAN1_SCE_IRQn)
IRQN_HANDLER(23, EXTI9_5_IRQn)
IRQN_HANDLER(24, TIM1_BRK_TIM9_IRQn)
IRQN_HANDLER(25, TIM1_UP_TIM10_IRQn)
IRQN_HANDLER(26, TIM1_TRG_COM_TIM11_IRQn)
IRQN_HANDLER(27, TIM1_CC_IRQn)
IRQN_HANDLER(28, TIM2_IRQn)
IRQN_HANDLER(29, TIM3_IRQn)
IRQN_HANDLER(30, TIM4_IRQn)
IRQN_HANDLER(31, I2C1_EV_IRQn)
IRQN_HANDLER(32, I2C1_ER_IRQn)
IRQN_HANDLER(33, I2C2_EV_IRQn)
IRQN_HANDLER(34, I2C2_ER_IRQn)
IRQN_HANDLER(35, SPI1_IRQn)
IRQN_HANDLER(36, SPI2_IRQn)
IRQN_HANDLER(37, USART1_IRQn)
IRQN_HANDLER(38, USART2_IRQn)
IRQN_HANDLER(39, USART3_IRQn)
IRQN_HANDLER(40, EXTI15_10_IRQn)
IRQN_HANDLER(41, RTC_Alarm_IRQn)
IRQN_HANDLER(42, OTG_FS_WKUP_IRQn)
IRQN_HANDLER(43, TIM8_BRK_TIM12_IRQn)
IRQN_HANDLER(44, TIM8_UP_TIM13_IRQn)
IRQN_HANDLER(45, TIM8_TRG_COM_TIM14_IRQn)
IRQN_HANDLER(46, TIM8_CC_IRQn)
IRQN_HANDLER(47, DMA1_Stream7_IRQn)
SKIP_HANLDER(48)
IRQN_HANDLER(49, SDIO_IRQn)
IRQN_HANDLER(50, TIM5_IRQn)
IRQN_HANDLER(51, SPI3_IRQn)
IRQN_HANDLER(52, UART4_IRQn)
IRQN_HANDLER(53, UART5_IRQn)
IRQN_HANDLER(54, TIM6_DAC_IRQn)
IRQN_HANDLER(55, TIM7_IRQn)
IRQN_HANDLER(56, DMA2_Stream0_IRQn)
IRQN_HANDLER(57, DMA2_Stream1_IRQn)
IRQN_HANDLER(58, DMA2_Stream2_IRQn)
IRQN_HANDLER(59, DMA2_Stream3_IRQn)
IRQN_HANDLER(60, DMA2_Stream4_IRQn)
IRQN_HANDLER(61, DFSDM1_FLT0_IRQn)
IRQN_HANDLER(62, DFSDM1_FLT1_IRQn)
IRQN_HANDLER(63, CAN2_TX_IRQn)
IRQN_HANDLER(64, CAN2_RX0_IRQn)
IRQN_HANDLER(65, CAN2_RX1_IRQn)
IRQN_HANDLER(66, CAN2_SCE_IRQn)
IRQN_HANDLER(67, OTG_FS_IRQn)
IRQN_HANDLER(68, DMA2_Stream5_IRQn)
IRQN_HANDLER(69, DMA2_Stream6_IRQn)
IRQN_HANDLER(70, DMA2_Stream7_IRQn)
IRQN_HANDLER(71, USART6_IRQn)
IRQN_HANDLER(72, I2C3_EV_IRQn)
IRQN_HANDLER(73, I2C3_ER_IRQn)
IRQN_HANDLER(74, CAN3_TX_IRQn)
IRQN_HANDLER(75, CAN3_RX0_IRQn)
IRQN_HANDLER(76, CAN3_RX1_IRQn)
IRQN_HANDLER(77, CAN3_SCE_IRQn)
SKIP_HANLDER(78)
IRQN_HANDLER(79, AES_IRQn)
IRQN_HANDLER(80, RNG_IRQn)
IRQN_HANDLER(81, FPU_IRQn)
IRQN_HANDLER(82, UART7_IRQn)
IRQN_HANDLER(83, UART8_IRQn)
IRQN_HANDLER(84, SPI4_IRQn)
IRQN_HANDLER(85, SPI5_IRQn)
SKIP_HANLDER(86)
IRQN_HANDLER(87, SAI1_IRQn)
IRQN_HANDLER(88, UART9_IRQn)
IRQN_HANDLER(89, UART10_IRQn)
SKIP_HANLDER(90)
SKIP_HANLDER(91)
IRQN_HANDLER(92, QUADSPI_IRQn)
SKIP_HANLDER(93)
SKIP_HANLDER(94)
IRQN_HANDLER(95, FMPI2C1_EV_IRQn)
IRQN_HANDLER(96, FMPI2C1_ER_IRQn)
IRQN_HANDLER(97, LPTIM1_IRQn)
IRQN_HANDLER(98, DFSDM2_FLT0_IRQn)
IRQN_HANDLER(99, DFSDM2_FLT1_IRQn)
IRQN_HANDLER(100, DFSDM2_FLT2_IRQn)
IRQN_HANDLER(101, DFSDM2_FLT3_IRQn)

#endif

