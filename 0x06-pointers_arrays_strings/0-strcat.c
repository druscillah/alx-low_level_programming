#include "main.h"

/**
 * _strcat - concantente two strings
 * @dest: copy to
 * @src: copy from
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int j;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	for (j = 0; src[j] != '\0'; ++j, l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (0);
}
