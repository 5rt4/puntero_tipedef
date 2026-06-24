#ifndef CICLISMO_H
#define CICLISMO_H
#include "stm32f103xh.h"

#define SS 1
#define SL 2
typedef struct 
{
    //sensores
    GPIO_TypeDef* puerto_sensores = GPIOA;
    int sensores[2]={SS,SL};

    //TIEMPO
GPIO_TypeDef* tiempoL_puerto = GPIOC;
int t_l_pines[4]={0,1,2,3};
GPIO_TypeDef* tiempoH_puerto=GPIOB;
int t-h_pines[4]={12,13,14,15};

    //d7s
    GPIO_TypeDef* d7s_puerto
    int d7s_pines[7];
    int d7s_num;
    int tf;
}freddy_t;



void ciclismo_init();
void d7s();
int carrera();
int tiempo;
#endif