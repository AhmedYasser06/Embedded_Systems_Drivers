/* 
 * File:   application.h
 * Author: Ahmed Yasser
 * https://www.linkedin.com/in/ahmed-yasser-b664b6255/
 * Created on July 1, 2024, 9:02 PM
 */

#ifndef APPLICATION_H
#define	APPLICATION_H

/* Section : Includes */
#include "ECU_Layer/ecu_layer_init.h"
#include "MCAL_Layer/Interrupt/mcal_external_interrupt.h"
#include "MCAL_Layer/ADC/hal_adc.h"
#include "ECU_Layer/LED/ecu_led.h"
#include "MCAL_Layer/SPI/hal_spi.h"
#include "MCAL_layer/ADC/hal_adc.h"
#include "MCAL_Layer/Timer0/hal_timr0.h"
#include "MCAL_Layer/Timer1/hal_timr1.h"
#include "MCAL_Layer/Timer2/hal_timr2.h"
#include "MCAL_Layer/Timer3/hal_timr3.h"
#include "MCAL_Layer/CCP/hal_ccp.h"
#include "MCAL_Layer/usart/hal_usart.h"
#include "MCAL_Layer/I2C/hal_i2c.h"
#include "ECU_Layer/button/ecu_button.h"
#include "ECU_Layer/LED/ecu_led.h"
#include "ECU_Layer/Rleay/ecu_relay.h"
#include "ECU_Layer/DC_Motor/ecu_dc_motor.h"
#include "ECU_Layer/7_Segment/ecu_seven_segment.h"
#include "MCAL_Layer/CCP/hal_ccp.h"
#include "MCAL_Layer/Timer3/hal_timr3.h"

/* Section: Macro Declarations */

/* Section: Macro Functions Declarations */

/* Section: Data Type Declarations */
extern keypad_t keypad1;
extern led_t led1;
extern chr_lcd_8bit_t lcd_2;
extern chr_lcd_4bit_t lcd_1;
/* Section: Function Declarations */
void application_intialize(void);

#endif	/* APPLICATION_H */

    