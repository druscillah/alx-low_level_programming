#include "main.h"

/**
 * _abs - print absolute value of an integer
 * @i: input number as an integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (-1 * i);
	}
}
