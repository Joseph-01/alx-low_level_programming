#include "variadic_functions.h"

/**
 *print_strings - a function that prints strings, followed by a new line
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *put;
	unsigned int x;
	va_list prints;

	va_start(prints, n);
	if (separator == NULL)
		separator = "";
	for (x = 0; x < n; x++)
	{
		put = va_arg(prints, char*);
		if (put == NULL)
			put = "(nil)";
		printf("%s", put);
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prints);
}
