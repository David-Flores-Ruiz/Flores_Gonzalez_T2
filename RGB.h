/*
 * RGB.h
 *
 *  Created on: 10 sep 2019
 *      Author: pacas
 */

#ifndef RGB_H_
#define RGB_H_

#include "stdint.h"

/*Constante que representa la habilitacion del clock GPIOA*/
#define SET_RED_ON 0x00400000;
#define SET_GREEN_ON 0x4000000;
#define SET_BLUE_ON 0x00200000;

#define SET_RED_OFF 0x00400000;
#define SET_GREEN_OFF 0x4000000;
#define SET_BLUE_OFF 0x00200000;

typedef enum{RED_ON, /*!< Definition to select GPIO A */
			 GREEN_ON, /*!< Definition to select GPIO B */
			 BLUE_ON, /*!< Definition to select GPIO C */
			} color_ON;



#endif /* RGB_H_ */
