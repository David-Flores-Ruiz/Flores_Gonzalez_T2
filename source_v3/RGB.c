/*
 * RGB.c
 *
 *  Created on: 10 sep 2019
 *      Author: pacas
 */
#include "MK64F12.h"
#include "RGB.h"
#include "bits.h"
#include "GPIO.h"

uint8_t encender_LED(color_ON color_encendido)
{
	switch(color_encendido)
	{
			case RED_ON:   GPIO_clear_pin(GPIOB,bit_22);//GPIOB->PCOR = SET_RED_ON;
			break;
			case GREEN_ON: GPIO_clear_pin(GPIOE,bit_26);//GPIOE->PCOR = SET_GREEN_ON;
			break;
			case BLUE_ON: GPIO_clear_pin(GPIOB,bit_21);//GPIOB->PCOR = SET_BLUE_ON;
			break;
			default: /**If doesn't exist the option*/
			return(FALSE);
	}
	return(FALSE);
};
uint8_t apagar_LED(color_OFF color_apagar)
{
	switch(color_apagar)
	{
			case RED_ON:   GPIO_set_pin(GPIOB,bit_22);//GPIOB->PCOR = SET_RED_ON;
			break;
			case GREEN_ON: GPIO_set_pin(GPIOE,bit_26);//GPIOE->PCOR = SET_GREEN_ON;
			break;
			case BLUE_ON: GPIO_set_pin(GPIOB,bit_21);//GPIOB->PCOR = SET_BLUE_ON;
			break;
			default: /**If doesn't exist the option*/
				return(FALSE);
	}
	return(FALSE);
};

