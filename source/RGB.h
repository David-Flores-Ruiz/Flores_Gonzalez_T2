/*
 * RGB.h
 *
 *  Created on: 10 sep 2019
 *      Author: Ricardo Pacas
 */

#ifndef RGB_H_
#define RGB_H_

#include "stdint.h"

#define SET_RED_ON	  0x00400000;
#define SET_GREEN_ON  0x04000000;
#define SET_BLUE_ON   0x00200000;

#define SET_RED_OFF   0x00400000;
#define SET_GREEN_OFF 0x04000000;
#define SET_BLUE_OFF  0x00200000;

typedef enum {
	RED_ON,
	GREEN_ON,
	BLUE_ON,
} color_ON;

typedef enum {
	RED_OFF,
	GREEN_OFF,
	BLUE_OFF,
} color_OFF;

/********************************************************************************************/
/********************************************************************************************/
/********************************************************************************************/
/*!
 	 \brief	 This function clears all interrupts that were sensed by the GPIO.

 	 \param[in]  port_name Port to clear interrupts.
 	 \return void
 	 \todo Implement a mechanism to clear interrupts by a specific pin.
 */
uint8_t encender_LED(color_ON color_encendido);

/********************************************************************************************/
/********************************************************************************************/
/********************************************************************************************/
/*!
 	 \brief	 This function clears all interrupts that were sensed by the GPIO.

 	 \param[in]  port_name Port to clear interrupts.
 	 \return void
 	 \todo Implement a mechanism to clear interrupts by a specific pin.
 */
uint8_t apagar_LED(color_OFF color_apagar);


#endif /* RGB_H_ */
