/* 
 * File:   application.c
 * Author: Ahmed.Elghafar
 * https://www.linkedin.com/in/ahmedabdelghafarmohammed/
 */

#include "application.h"
#include "MCAL_Layer/SPI/hal_spi.h"
#include "MCAL_layer/ADC/hal_adc.h"
#include "MCAL_Layer/Timer1/hal_timr1.h"
#include "MCAL_Layer/Timer2/hal_timr2.h"
#include "MCAL_Layer/Timer3/hal_timr3.h"
#include "MCAL_Layer/CCP/hal_ccp.h"
#include "MCAL_Layer/usart/hal_usart.h"
#include "MCAL_Layer/I2C/hal_i2c.h"

mssp_i2c_t i2c_obj;
int main() { 
    Std_ReturnType ret = E_NOT_OK;
    
    application_intialize();
    i2c_obj.i2c_clock = 100000;
    i2c_obj.i2c_cfg.i2c_mode = I2C_MSSP_MASTER_MODE;
    i2c_obj.i2c_cfg.i2c_mode_cfg = I2C_MASTER_MODE_DEFINED_CLOCK;
    i2c_obj.i2c_cfg.i2c_SMBus_control = I2C_SMBus_DISABLE;
    i2c_obj.i2c_cfg.i2c_slew_rate = I2C_SLEW_RATE_DISABLE;

    ret = MSSP_I2C_Init(&i2c_obj);
  
    while(1){  
         ret = MSSP_I2C_Master_Send_Start(&i2c_obj);
         __delay_ms(1000);
         ret = MSSP_I2C_Master_Send_Repeated_Start(&i2c_obj);   
         ret = MSSP_I2C_Master_Send_Stop(&i2c_obj); 
         __delay_ms(1000);
    }
    return (EXIT_SUCCESS);
}

void application_intialize(void){
    Std_ReturnType ret = E_NOT_OK;
    ecu_layer_intialize();
}
