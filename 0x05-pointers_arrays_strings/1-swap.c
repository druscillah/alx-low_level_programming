#include "main.h"

/**
 * swap_int - swapping two integers *a,*b
 * @a: first integer
 * @b: second integer
 * Return: swapped values
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
