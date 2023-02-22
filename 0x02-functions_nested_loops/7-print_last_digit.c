#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the input number
 * Return: value of the last digit
 */
int print_last_digit(int l)
{
	l = (n % 10);
	if (l > 0)
	{
		_putchar(l + 48);

		return (l);
	}
	else
	{
		_putchar(-l + 48);

		return (-l);
	}
}
