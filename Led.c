#include "Led.h"
#include "gpio.h"


void InputOutputConfig(uint32_t *GPIOx, uint8_t Pin, uint8_t Mode)
{
  EMB_ASSERT(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC  || GPIOx == GPIOD ); 
  EMB_ASSERT(Pin >= PIN0 && Pin <= PIN15);
  EMB_ASSERT(Mode >= INPUT && Mode <= ANALOG_INPUT);
   *GPIOx &= ~(0x3 << Pin*2);
   *GPIOx |= (Mode << Pin*2);
}
void ButtonToggleLed(uint32_t *GPIOx, uint8_t Pin, uint8_t Button)
{
  EMB_ASSERT(GPIOx == GPIOA || GPIOx == GPIOB || GPIOx == GPIOC  || GPIOx == GPIOD );
  EMB_ASSERT(Pin >= PIN0 && Pin <= PIN15);
  EMB_ASSERT(PinValue == 0 || PinValue == 1);
  
  *(GPIOx + OFFSET_ODR) &= ~(1<<Pin);
  *(GPIOx + OFFSET_ODR) |=  (PinValue<<Pin);
  while 
  { 
    if (READPINTEST == 1)
      {
        L=1;
        if (READPINTEST == 1)
          L==0;
      }
  }
}