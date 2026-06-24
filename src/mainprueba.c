#include "ciclismo.h"
#define fuegos_artificiales 0 //salida
#define participante_1 1 //entrada
#define participante_2 2 //entrada
#define participante_3 3 //entrada
#define premiacion 8 //exti

int btn [3] = {participante_1,participante_2,participante_3};

int main(){
    RCC->APB2ENR|=RCC_APB2ENR_IOPAEN|RCC_APB2ENR_IOPBEN|RCC_APB2EN_AFIO;
    for(int i=0;i<3;i++){
        GPIOB->CRL&=~(0XF<<btn[i]);
        GPIOB->CRL |= (0X8<<btn[i]);
        GPIOB->BSSR|=(1<<btn[i]);
    }
    GPIOA->CRH&=~(0XF<<fuegos_aartificiales*4);
    GPIOA->CRH&=~(0XF<<fuegos_aartificiales*4);
}