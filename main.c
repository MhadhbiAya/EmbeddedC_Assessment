/**
  ******************************************************************************
  * @file    main.c
  * @author  Aya Mhadhbi
  * @brief   GPIO Driver 
  * @version V1.0.0
  * @date    19-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"
#include "Led.h"

int main()
{
   InputOutputConfig(GPIOD,INPUT,PIN6);
   GPIO_Write_Pin(GPIOD,PIN12,SET);
   uint8_t READPINTest= GPIO_READ_PIN(GPIOD, PIN12);
   ButtonToggleLed(GPIOD,OUTPUT,PIN12);
   
  while(1)
  {
  }
}
/**************************************END OF FILE**************************************/
