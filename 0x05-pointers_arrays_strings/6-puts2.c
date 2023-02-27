#include "main.h"

/**
 * puts2 - print every other char from the first char
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((1 % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
