#include "configdef.h"

configuracion_t LED;
configuracion_t PULS;

int main (void){
    LED.puerto=GPIOA;
    LED.config=0;
    PULS.puerto=GPIOB;
    PULS.config=3;

    gpio_config(&LED);
    gpio_config(&PULS);

    while(1){
        if(gpio_estado(&PULS)) LED.estPin=1;
        else LED.estPin=0;
        gpio_on_off(&LED); 
    }
    return 0;
}

//codigo de ejemplo jijiji