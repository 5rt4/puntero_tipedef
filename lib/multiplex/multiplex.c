#include "configdef.h"
#include "stm32f103xb.h"

void gpio_config(configuracion_t* pin_elegido){
    if(pin_elegido->puerto==GPIOA) RCC->APB2ENR|=RCC_APB2ENR_IOPAEN;
    else if(pin_elegido->puerto==GPIOB) RCC->APB2ENR|=RCC_APB2ENR_IOPBEN;
        else if(pin_elegido->puerto==GPIOC) RCC->APB2ENR|=RCC_APB2ENR_IOPCEN;

    unsigned int configuracion_pin;
    switch(pin_elegido->config){
        case 0:
            configuracion_pin=0x1;
        break;
        case 1:
            configuracion_pin=0x4;
        break;
        case 2:
            configuracion_pin=0x8;
        break;
        case 3:
            configuracion_pin=0x8;
        break;
    }

    if(pin_elegido->pin<8){
        pin_elegido->puerto ->CRL &=~(0xF<<(pin_elegido->pin*4));
        pin_elegido->puerto ->CRL &=~(configuracion_pin<<(pin_elegido->pin*4));
        if(pin_elegido->config==2) pin_elegido->puerto -> BSRR|=(1<<pin_elegido->pin);
        else if(pin_elegido->config==3) pin_elegido->puerto -> BSRR|=(1<<pin_elegido->pin+16);
    }else{
        pin_elegido->puerto ->CRH &=~(0xF<<(((pin_elegido->pin)%8)*4));
        pin_elegido->puerto ->CRH &=~(configuracion_pin<<(((pin_elegido->pin)%8)*4));
        if(pin_elegido->config==2) pin_elegido->puerto -> BSRR|=(1<<pin_elegido->pin);
        else if(pin_elegido->config==3) pin_elegido->puerto -> BSRR|=(1<<pin_elegido->pin+16);
    }
}
void gpio_on_off(configuracion_t* pin_elegido){
    if(pin_elegido->estPin) pin_elegido->puerto -> BSRR|=(1<<pin_elegido->pin);
    else pin_elegido->puerto -> BSRR|=(1<<pin_elegido->pin +16);
}
int gpio_estado(configuracion_t* pin_elegido){
    return (pin_elegido->puerto -> IDR & (1<<pin_elegido->pin));
}
