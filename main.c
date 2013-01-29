#include "stm32f0xx.h"
#include "system_stm32f0xx.h"
//#include <core_cm0.h>
//For debug purposes
#include <__cross_studio_io.h>


void
main(void)
{
  
  uint32_t loop_counter = 0;

  SystemInit();
//  GPIOA->MODER = 0x00020000;

  //LED configuration
  GPIOC->MODER = 0x00050000;
  GPIOC->OSPEEDR = 0x00000000;
  GPIOC->PUPDR = 0x00000000;
  //GPIOC->BSRR = 0x00000300;

  
  while(1)
  {
    if(loop_counter == 2000000) 
    {GPIOC->BSRR = 0x01000200;}
    
    if(loop_counter == 4000000) 
    {GPIOC->BSRR = 0x02000100;}
    
    if(loop_counter == 4000000) 
    {loop_counter = 0;}
    else 
    {loop_counter++;}
  }
}
