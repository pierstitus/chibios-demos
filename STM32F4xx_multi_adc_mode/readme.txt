*****************************************************************************
** ChibiOS/RT HAL - ADC driver demo for STM32F4xx.                         **
*****************************************************************************

** TARGET **

The demo runs on an STMicroelectronics STM32F4-Discovery board.

** The Demo **

The application demonstrates the use of the STM32F4xx multi ADC mode using a
hacked together extra driver in adc_multi.c.

PA0, PA1 and PA2 are continuously read and output to the usb-serial device.
