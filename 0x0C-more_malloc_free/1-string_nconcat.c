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
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;
	
	if (n >= k)
		l = i + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[l] = '\0';
	return (str);
}
