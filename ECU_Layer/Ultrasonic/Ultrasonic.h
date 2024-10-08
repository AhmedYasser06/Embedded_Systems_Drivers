/* 
 * File:   Ultrasonic.h
 * Author: Ahmed Yasser
 * https://www.linkedin.com/in/ahmed-yasser-b664b6255/
 * Created on July 18, 2024, 8:51 PM
 */

#ifndef ULTRASONIC_H
#define	ULTRASONIC_H

#include "Ultrasonic_Cfg.h"

#define SOUND_SPEED_CM_SECOND       34000

typedef struct{
    pin_config_t Trigger_Pin;
    pin_config_t Echo_Pin; 
}ultrasonic_t;

Std_ReturnType Ultrasonic_Init(const ultrasonic_t *_config);
Std_ReturnType Ultrasonic_Calculate_Distance(const ultrasonic_t *_config, uint16 *Distance);

#endif	/* ULTRASONIC_H */

