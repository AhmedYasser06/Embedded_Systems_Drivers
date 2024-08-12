/* 
 * File:   application.c
 * Author: Ahmed.Elghafar
 * https://www.linkedin.com/in/ahmedabdelghafarmohammed/
 */

#include "application.h"
#include "MCAL_Layer/SPI/hal_spi.h"


int main() { 
    Std_ReturnType ret = E_NOT_OK;
    
    application_intialize();

    while(1){  
        
    
    }
    return (EXIT_SUCCESS);
}

void application_intialize(void){
    Std_ReturnType ret = E_NOT_OK;
    ecu_layer_intialize();
}
