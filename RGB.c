/*
 * RGB.c
 *
 *  Created on: 10 sep 2019
 *      Author: pacas
 */
#include "MK64F12.h"
#include "RGB.h"
#include "bits.h"

uint8_t color_LED(color_ON color_encendido)
{
	switch(color_encendido)
	{
		case RED_ON:  GPIOB->PCOR = SET_RED_ON;
		break;
		case GREEN_ON:  GPIOB->PCOR = SET_GREEN_ON;
		break;
		case BLUE_ON: GPIOB->PCOR = SET_BLUE_ON;
		break;
		default: /**If doesn't exist the option*/
			return(FALSE);
	}
	return(FALSE);
};

