/*
 * RGB.c
 *
 *  Created on: 10 sep 2019
 *      Author: Ricardo Pacas
 */

#include "MK64F12.h"
#include "RGB.h"
#include "bits.h"

uint8_t encender_LED(color_ON color_encendido) {
	switch (color_encendido) {
	case RED_ON:
		GPIOB->PCOR = SET_RED_ON;
		break;
	case GREEN_ON:
		GPIOE->PCOR = SET_GREEN_ON;
		break;
	case BLUE_ON:
		GPIOB->PCOR = SET_BLUE_ON;
		break;
	default: /**If doesn't exist the option*/
		return (FALSE);
	}
	return (FALSE);
}

uint8_t apagar_LED(color_OFF color_apagar) {
	switch (color_apagar) {
	case RED_OFF:
		GPIOB->PSOR = SET_RED_OFF;
		break;
	case GREEN_OFF:
		GPIOE->PSOR = SET_GREEN_OFF;
		break;
	case BLUE_OFF:
		GPIOB->PSOR = SET_BLUE_OFF;
		break;
	default: /**If doesn't exist the option*/
		return (FALSE);
	}
	return (FALSE);
}
