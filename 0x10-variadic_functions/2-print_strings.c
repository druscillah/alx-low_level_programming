#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints a string
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Description: if separator is NULL, it is not printed.
 * if one of the strings is NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	if (n > 0)
	{
		va_start(strings, n);

		while (i < n)
		{
			str = va_arg(strings, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
			i++;
		}

		va_end(strings);
	}

	printf("\n");
}
