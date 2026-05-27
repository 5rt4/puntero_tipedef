#include"confignorm.h"
#include "stm32f103xb.h"

void pin_config(char puerto, int pin, char io, char config){
    if(puerto=='A'){
        RCC -> APB2ENR |= RCC_APB2ENR_IOPAEN;
          if(pin<8){
        GPIOA -> CRL &=~(0XF<<(pin*4));
        if(io=='i'){
            if(config=='f') GPIOA -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOA -> CRL |=(0X8<<(pin*4));
                GPIOA -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOA -> CRL |=(0X8<<(pin*4));
                GPIOA -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOA -> CRL |=(0X1<<(pin*4));
        
    }
    else{
        GPIOA -> CRH &=~(0XF<<((pin%8)*4));
        if(io=='i'){
            if(config=='f') GPIOA -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOA -> CRL |=(0X8<<(pin*4));
                GPIOA -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOA -> CRL |=(0X8<<(pin*4));
                GPIOA -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOA -> CRL |=(0X1<<(pin*4));
    }
}

    if(puerto=='B'){
        RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
      if(pin<8){
        GPIOB -> CRL &=~(0XF<<(pin*4));
        if(io=='i'){
            if(config=='f') GPIOB -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOB -> CRL |=(0X8<<(pin*4));
                GPIOB -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOB -> CRL |=(0X8<<(pin*4));
                GPIOB -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOB -> CRL |=(0X1<<(pin*4));
        
    }
    else{
        GPIOB -> CRH &=~(0XF<<((pin%8)*4));
        if(io=='i'){
            if(config=='f') GPIOB -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOB -> CRL |=(0X8<<(pin*4));
                GPIOB -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOB -> CRL |=(0X8<<(pin*4));
                GPIOB -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOB -> CRL |=(0X1<<(pin*4));
    }
}


    
    if(puerto=='C'){
    RCC -> APB2ENR |= RCC_APB2ENR_IOPCEN;
      if(pin<8){
        GPIOC -> CRL &=~(0XF<<(pin*4));
        if(io=='i'){
            if(config=='f') GPIOC -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOC -> CRL |=(0X8<<(pin*4));
                GPIOC -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOC -> CRL |=(0X8<<(pin*4));
                GPIOC -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOC -> CRL |=(0X1<<(pin*4));
        
    }
    else{
        GPIOC -> CRH &=~(0XF<<((pin%8)*4));
        if(io=='i'){
            if(config=='f') GPIOC -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOC -> CRL |=(0X8<<(pin*4));
                GPIOC -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOC -> CRL |=(0X8<<(pin*4));
                GPIOC -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOC -> CRL |=(0X1<<(pin*4));
    }
}


    if(puerto=='D'){ 
    RCC -> APB2ENR |= RCC_APB2ENR_IOPDEN;
      if(pin<8){
        GPIOD -> CRL &=~(0XF<<(pin*4));
        if(io=='i'){
            if(config=='f') GPIOD -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOD -> CRL |=(0X8<<(pin*4));
                GPIOD -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOD -> CRL |=(0X8<<(pin*4));
                GPIOD -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOD -> CRL |=(0X1<<(pin*4));
        
    }
    else{
        GPIOD -> CRH &=~(0XF<<((pin%8)*4));
        if(io=='i'){
            if(config=='f') GPIOD -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOD -> CRL |=(0X8<<(pin*4));
                GPIOD -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOD -> CRL |=(0X8<<(pin*4));
                GPIOD -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOD -> CRL |=(0X1<<(pin*4));
    }
}


    if(puerto=='E'){ 
    RCC -> APB2ENR |= RCC_APB2ENR_IOPEEN;
      if(pin<8){
        GPIOE -> CRL &=~(0XF<<(pin*4));
        if(io=='i'){
            if(config=='f') GPIOE -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOE -> CRL |=(0X8<<(pin*4));
                GPIOE -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOE -> CRL |=(0X8<<(pin*4));
                GPIOE -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOE -> CRL |=(0X1<<(pin*4));
        
    }
    else{
        GPIOE -> CRH &=~(0XF<<((pin%8)*4));
        if(io=='i'){
            if(config=='f') GPIOE -> CRL |=(0X4<<(pin*4));
            if(config=='pp'){
                GPIOE -> CRL |=(0X8<<(pin*4));
                GPIOE -> BSRR |= (1<<pin);
                }
            if(config=='pd'){
                GPIOE -> CRL |=(0X8<<(pin*4));
                GPIOE -> BSRR |= (1<<(pin+16));
                }
            }
        if(io='o') GPIOE -> CRL |=(0X1<<(pin*4));
    }
  }
}

void pin_on_off(char puerto, int pin, int est_pin){
    if(puerto=='A'){
        if(est_pin==1) GPIOA -> BSRR |= (1<<pin);
    }
    if(puerto=='B'){
        if(est_pin==1) GPIOB -> BSRR |= (1<<pin);
    }
    if(puerto=='C'){
        if(est_pin==1) GPIOC -> BSRR |= (1<<pin);
    }
    if(puerto=='D'){
        if(est_pin==1) GPIOD -> BSRR |= (1<<pin);
    }
    if(puerto=='E'){
        if(est_pin==1) GPIOE -> BSRR |= (1<<pin);
    }
}

void pin_estado(char puerto, int pin){
    if(puerto=='A') GPIOA -> IDR & (1<<pin);
    if(puerto=='B') GPIOB -> IDR & (1<<pin);
    if(puerto=='C') GPIOC -> IDR & (1<<pin);
    if(puerto=='D') GPIOD -> IDR & (1<<pin);
    if(puerto=='E') GPIOE -> IDR & (1<<pin);
}