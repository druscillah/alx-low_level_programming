#include "main.h"

/**
 * _print_rev_recursion - print the reverse of a string
 * @s: input
 * Return: 0 always
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	_putchar('\n');
}
