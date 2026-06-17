#ifndef MULTIPLEX_H
#define MULTIPLEX_H
#include <stdint.h>
#include "stm32f103xb.h"
typedef struct {
GPIO_TypeDef* puerto;            //Qué puerto es
unsigned int pin_entradas[8];    //pines de entradas
unsigned int pin_seleccion[3];   //pines de seleccion
unsigned int pin_salida;         //pin de salida
} configuracion_t;
void gpio_config(configuracion_t*);
void gpio_seleccion(configuracion_t*);


#endif