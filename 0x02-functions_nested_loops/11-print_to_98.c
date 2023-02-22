#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98 followed by a new line
 * @n: print from this number
 * Return: 98 as the last digit
 */
void print_to_98(int n)
{
	int l, k;

	if (n <= 98)
	{
		for (l = n; l <= n; l++)
		{
			if (l == 98)
				printf("%d\n", n);
			else if (l != 98)
				printf("%d ,", n);
		}
	}
	if (n >= 98)
	{
		for (k = n; k >= n; k--)
		{
			if (k == 98)
				printf("%d\n", n);
			else if (k != 98)
				printf("%d ,", n);
		}
	}
}


