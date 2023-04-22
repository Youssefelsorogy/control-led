
#include <avr/io.h>

#define F_CPU 8000000

#include <util/delay.h>

#include "STD_TYPES.h"

#include "BIT_MATH.h"


void main(void)
{

	/* Set Pin A0 as Output Pin */
				DDRA = 0x01;

				/* SET A0 as High */
				PORTA = 0x01;

				/* Wait of 1 second */
				_delay_ms(1000);

				/* Turn of the LED */
				PORTA = 0;

	while(1)
	{


	}

}
