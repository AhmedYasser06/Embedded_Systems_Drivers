/* 
 * File:   application.c
 * Author: Ahmed Yasser
 * https://www.linkedin.com/in/ahmed-yasser-b664b6255/
 */

#include "application.h"

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
