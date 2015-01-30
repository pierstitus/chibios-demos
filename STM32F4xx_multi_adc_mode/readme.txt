*****************************************************************************
** ChibiOS/RT HAL - ADC driver demo for STM32F4xx.                         **
*****************************************************************************

** TARGET **

The demo runs on an STMicroelectronics STM32F4-Discovery board.

** The Demo **

The application demonstrates the use of the STM32F4xx multi ADC mode using a
hacked together extra driver in adc_multi.c.

PA0, PA1 and PA2 are continuously read and output to the usb-serial device.

** Buggy behaviour **
Each time the 3 ADC's are converted 4 DMA transfers are done, the ADC3 is
transfered one extra time.

21102948: 4095,    0, 1006, 1030, 4095,    0, 1030,  996, 4095,    2,  996, 1009,
21102966: 4095,   10, 1005, 1020, 4095,    0, 1020, 1040, 4095,    0, 1040,  997,
21103008: 4095,    0, 1005, 1024, 4095,    2, 1024,  976, 4095,    0,  976,  982,
21103176: 4095,    1,  982,  997, 4095,    0,  997, 1010, 4095,    1,  979, 1025,
21103188: 4095,    0,  985,  993, 4095,    6,  993,  995, 4095,    1,  995, 1007,
