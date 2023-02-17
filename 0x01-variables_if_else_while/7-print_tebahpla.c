#include <stdio.h>

/**
 * main - Reverse of the alphabet lowercase
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');

	return (0);
}
