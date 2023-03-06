#include "main.h"

/**
 * _memcpy - copies a block of memory
 * @src: where memory is copies from
 * @dest: where memory is copies to
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
