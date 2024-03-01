#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: the number of integers passed to the function
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list print;

	va_start(print, n);

	if (separator == NULL)
		separator = "";
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(print, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print);
}
