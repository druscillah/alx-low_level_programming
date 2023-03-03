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
	j = 0;
	while (src[j] != '\0')
	{
		dest[l] = src[j];
		l++;
		j++;
	}
	dest[l] = '\0';
	return (0);
}
