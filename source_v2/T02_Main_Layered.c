/*
 * @file:			T02_InvertSequencesRGB_White_Layered.c
 * @company:		ITESO
 * @Engineer Team:	D.F.R. / R.G.P.
 */

#include <stdio.h>
#include <stdint.h>
#include "MK64F12.h"
#include <bits.h>		// se añadió .h vClass
#include <GPIO.h>		// se añadió .h vClass	-  tiene propio .c vClass


int main(void) {

	GPIO_clock_gating(GPIO_A);	// sw3
	GPIO_clock_gating(GPIO_B);	// led azul y rojo
	GPIO_clock_gating(GPIO_C);	// sw2
	GPIO_clock_gating(GPIO_E);	// led verde

	gpio_pin_control_register_t led_config = GPIO_MUX1;
	gpio_pin_control_register_t sw_config  = GPIO_MUX1 |GPIO_PE | GPIO_PS;

	GPIO_pin_control_register( GPIO_A,  4, &sw_config );  // sw3	  - pin  4
	GPIO_pin_control_register( GPIO_B, 21, &led_config);  // ledBlue  - pin 21
	GPIO_pin_control_register( GPIO_B, 22, &led_config);  // ledRed   - pin 22
	GPIO_pin_control_register( GPIO_C,  6, &sw_config );  // sw2	  - pin  6
	GPIO_pin_control_register( GPIO_E, 26, &led_config);  // ledGreen - pin 26



	// insert code

    return 0 ;
}
