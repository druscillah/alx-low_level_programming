#include "main.h"
/**
 * jack_bauer-prints all minutes in a day from 00:00
 *
 * Return:0 if succeesful.
 */


void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
