#include "main.h"

/**
 * _pow_recursion - returns the value raised to power
 * @x: value raised
 * @y: power
 * Return: the value raised to power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
