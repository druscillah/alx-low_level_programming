#include "main.h"

/**
 * _isupper - checks if parameter is uppercase letters
 * @c: character to check
 * Return: 1 if is an uppercase character , 0 if other
 */
int _isupper(int c)
{
	if (c >= 59 && c <= 90)
	{

		return (1);
	}
	else
	{

		return (0);
	}
}
