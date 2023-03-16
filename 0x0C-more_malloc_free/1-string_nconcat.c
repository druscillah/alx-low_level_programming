#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to the allocaed memory
 * if malloc fails, status value is equal to 98
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;

	if (n >= j)
		k = i + j;
	else
		k = i + n;
	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (l < k)
	{
		if (l <= i)
			str[l] = s1[l];
		if (l >= i)
		{
			str[l] = s2[j];
			j++;
		}
		l++;
	}
	str[l] = '\0';
	return (str);
}
