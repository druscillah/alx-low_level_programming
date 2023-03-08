#include "main.h"

/**
 * factorial - returns the factoral of a given number
 * @n: input
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n);
}