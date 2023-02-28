#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; ++length)
		_putchar(length);
	
	return (length);
}
