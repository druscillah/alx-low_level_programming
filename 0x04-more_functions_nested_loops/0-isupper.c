#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: character to check
 * Return: 1 if is an uppercase character , 0 if other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}