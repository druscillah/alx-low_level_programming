#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: value to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
