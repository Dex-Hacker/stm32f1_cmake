add_library(stm32std "")

target_sources(stm32std
PRIVATE
    CMSIS/CM3/CoreSupport/core_cm3.c
    CMSIS/CM3/DeviceSupport/ST/STM32F10x/system_stm32f10x.c 
    
    STM32F10x_StdPeriph_Driver/src/misc.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_adc.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_bkp.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_can.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_cec.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_crc.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_dac.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_dbgmcu.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_dma.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_exti.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_flash.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_fsmc.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_gpio.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_i2c.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_iwdg.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_pwr.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_rcc.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_rtc.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_sdio.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_spi.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_tim.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_usart.c
    STM32F10x_StdPeriph_Driver/src/stm32f10x_wwdg.c
)

target_include_directories(stm32std
PUBLIC
    CMSIS/CM3/CoreSupport
    CMSIS/CM3/DeviceSupport/ST/STM32F10x
    STM32F10x_StdPeriph_Driver/inc
)

target_link_libraries(stm32std
PRIVATE
    usercode
)