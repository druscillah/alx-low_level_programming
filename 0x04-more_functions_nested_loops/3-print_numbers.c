#include "main.h"

/**
 * print_numbers - from 0 - 9 followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}


