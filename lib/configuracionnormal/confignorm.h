#ifndef CONFIGNORM_H
#define CONFIGNORM_H
#include "stm32f103xb.h"
void pin_config(char puerto, int pin, char io, char config);
void pin_on_off(char puerto, int pin, int est_pin);
void pin_estado(char puerto, int pin);
#endif