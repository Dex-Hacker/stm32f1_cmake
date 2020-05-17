#include <stdint.h>
#include <stddef.h>

void default_irq_handler(void)
{
    while (1)
        ;
}

#define _IRQ_DEFINE(name) void name(void) __attribute__((weak, alias("default_irq_handler")));
_IRQ_DEFINE(WWDG_IRQHandler)
_IRQ_DEFINE(PVD_IRQHandler)
_IRQ_DEFINE(TAMPER_IRQHandler)
_IRQ_DEFINE(RTC_IRQHandler)
_IRQ_DEFINE(FLASH_IRQHandler)
_IRQ_DEFINE(RCC_IRQHandler)
_IRQ_DEFINE(EXTI0_IRQHandler)
_IRQ_DEFINE(EXTI1_IRQHandler)
_IRQ_DEFINE(EXTI2_IRQHandler)
_IRQ_DEFINE(EXTI3_IRQHandler)
_IRQ_DEFINE(EXTI4_IRQHandler)
_IRQ_DEFINE(DMA1_Channel1_IRQHandler)
_IRQ_DEFINE(DMA1_Channel2_IRQHandler)
_IRQ_DEFINE(DMA1_Channel3_IRQHandler)
_IRQ_DEFINE(DMA1_Channel4_IRQHandler)
_IRQ_DEFINE(DMA1_Channel5_IRQHandler)
_IRQ_DEFINE(DMA1_Channel6_IRQHandler)
_IRQ_DEFINE(DMA1_Channel7_IRQHandler)
_IRQ_DEFINE(ADC1_2_IRQHandler)
_IRQ_DEFINE(USB_HP_CAN1_TX_IRQHandler)
_IRQ_DEFINE(USB_LP_CAN1_RX0_IRQHandler)
_IRQ_DEFINE(CAN1_RX1_IRQHandler)
_IRQ_DEFINE(CAN1_SCE_IRQHandler)
_IRQ_DEFINE(EXTI9_5_IRQHandler)
_IRQ_DEFINE(TIM1_BRK_IRQHandler)
_IRQ_DEFINE(TIM1_UP_IRQHandler)
_IRQ_DEFINE(TIM1_TRG_COM_IRQHandler)
_IRQ_DEFINE(TIM1_CC_IRQHandler)
_IRQ_DEFINE(TIM2_IRQHandler)
_IRQ_DEFINE(TIM3_IRQHandler)
_IRQ_DEFINE(TIM4_IRQHandler)
_IRQ_DEFINE(I2C1_EV_IRQHandler)
_IRQ_DEFINE(I2C1_ER_IRQHandler)
_IRQ_DEFINE(I2C2_EV_IRQHandler)
_IRQ_DEFINE(I2C2_ER_IRQHandler)
_IRQ_DEFINE(SPI1_IRQHandler)
_IRQ_DEFINE(SPI2_IRQHandler)
_IRQ_DEFINE(USART1_IRQHandler)
_IRQ_DEFINE(USART2_IRQHandler)
_IRQ_DEFINE(USART3_IRQHandler)
_IRQ_DEFINE(EXTI15_10_IRQHandler)
_IRQ_DEFINE(RTCAlarm_IRQHandler)
_IRQ_DEFINE(USBWakeUp_IRQHandler)
#undef _IRQ_DEFINE

void (*irq[])(void) __attribute__((section(".isr_vector"))) = {
    WWDG_IRQHandler,
    PVD_IRQHandler,
    TAMPER_IRQHandler,
    RTC_IRQHandler,
    FLASH_IRQHandler,
    RCC_IRQHandler,
    EXTI0_IRQHandler,
    EXTI1_IRQHandler,
    EXTI2_IRQHandler,
    EXTI3_IRQHandler,
    EXTI4_IRQHandler,
    DMA1_Channel1_IRQHandler,
    DMA1_Channel2_IRQHandler,
    DMA1_Channel3_IRQHandler,
    DMA1_Channel4_IRQHandler,
    DMA1_Channel5_IRQHandler,
    DMA1_Channel6_IRQHandler,
    DMA1_Channel7_IRQHandler,
    ADC1_2_IRQHandler,
    USB_HP_CAN1_TX_IRQHandler,
    USB_LP_CAN1_RX0_IRQHandler,
    CAN1_RX1_IRQHandler,
    CAN1_SCE_IRQHandler,
    EXTI9_5_IRQHandler,
    TIM1_BRK_IRQHandler,
    TIM1_UP_IRQHandler,
    TIM1_TRG_COM_IRQHandler,
    TIM1_CC_IRQHandler,
    TIM2_IRQHandler,
    TIM3_IRQHandler,
    TIM4_IRQHandler,
    I2C1_EV_IRQHandler,
    I2C1_ER_IRQHandler,
    I2C2_EV_IRQHandler,
    I2C2_ER_IRQHandler,
    SPI1_IRQHandler,
    SPI2_IRQHandler,
    USART1_IRQHandler,
    USART2_IRQHandler,
    USART3_IRQHandler,
    EXTI15_10_IRQHandler,
    RTCAlarm_IRQHandler,
    USBWakeUp_IRQHandler,
};