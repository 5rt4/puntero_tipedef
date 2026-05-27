#include "configdef.h"
#include "stm32f103xb.h"

void gpio_puerto(configuracion_t* pinElegido){
if(pinElegido->estPin) pinElegido->puerto -> BSRR |=(1<<pinElegido->pin);
else pinElegido->puerto -> BSRR |=(1<<(pinElegido->pin+16));
}