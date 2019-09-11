#include <stdio.h>
#include <stdint.h>
#include "MK64F12.h"
#include "RGB.h"




int main(void) {


		 while(1) {



			 		};






		    return 0 ;
		    }




		////////////////////////////////////////////////////////////////////////////////
		// EOF t->de tipo

		////////////////////////////////////////////////////////////////////////////////

		void delay(uint16_t delay)
		{
			volatile uint16_t counter,counter1;

			for(counter=delay; counter > 0; counter--)
			{
				for(counter1=delay; counter1 > 0; counter1--)
					{
						__asm("nop");
					}
			}
		}

