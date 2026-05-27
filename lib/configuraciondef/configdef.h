#ifndef CONFIGDEF_H
#define CONFIGDEF_H
#include <stdint.h>
#include "stm32f103xb.h"
typedef struct {
GPIO_TypeDef* puerto;   //Qué puerto es
unsigned int pin;       //Número de pin
unsigned int config;    //Configuracion del pin
unsigned int estPin;    //Estado del pin
} configuracion_t;
void gpio_puerto(configuracion_t*);
void gpio_config(configuracion_t*);
void gpio_on_off(configuracion_t*);
void gpio_estado(configuracion_t*);
#endif