#include "multiplex.h"
#include "stm32f103xb.h"
int estado_final;
void gpio_config (configuracion_t* pines){
    if(pines->puerto==GPIOA) RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
    else if(pines->puerto==GPIOB) RCC->APB2ENR|=RCC_APB2ENR_IOPBEN;
    else if(pines->puerto==GPIOC) RCC->APB2ENR|=RCC_APB2ENR_IOPCEN;
        
    
        for(int i=0;i<8;i++){
            if(pines->pin_entradas[i]<8){
                pines->puerto -> CRL&=~(0xF<<(pines->pin_entradas[i])*4);
                pines->puerto -> CRL|=(0x4<<(pines->pin_entradas[i])*4);
        }else{
            pines->puerto -> CRH &=~(0xF<<((pines->pin_entradas[i])%8)*4);
            pines->puerto -> CRH|=(0x4<<(pines->pin_entradas[i])*4);
            }
        }

        for(int i=0;i<3;i++){
            if(pines->pin_seleccion[i]<8){
                pines->puerto -> CRL&=~(0xF<<(pines->pin_seleccion[i])*4);
                pines->puerto -> CRL|=(0x1<<(pines->pin_seleccion[i])*4);
        }else{
            pines->puerto -> CRH &=~(0xF<<((pines->pin_seleccion[i])%8)*4);
            pines->puerto -> CRH|=(0x1<<(pines->pin_seleccion[i])*4);
            }
        }

        if(pines->pin_salida<8){
            pines->puerto -> CRL &=~ (0xF<<(pines->pin_salida)*4);
            pines->puerto -> CRL &=~ (0x1<<(pines->pin_salida)*4);
        }else{
            pines->puerto -> CRH &=~ (0xF<<((pines->pin_salida)%8)*4);
            pines->puerto -> CRH |= (0x1<<((pines->pin_salida)%8)*4);
        }
    
    estado_final = pines->puerto -> IDR & (1<<pines->pin_seleccion[1]) | pines->puerto -> IDR & (1<<pines->pin_seleccion[2]) | pines->puerto -> IDR & (1<<pines->pin_seleccion[3]);
}
