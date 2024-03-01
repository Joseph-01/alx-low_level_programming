#include "variadic_functions.h"

/**
 *print_all - a program that prints anything
 *@format: list of types of arguments passed to the function
 *Return: void
 */

void print_all(const char * const format, ...)
{
	va_list printall;
	unsigned int x = 0, y, e = 0;
	char *put;
	const char s_arg[] = "cifs";

	va_start(printall, format);
	while (format && format[x])
	{
		y = 0;
		while (s_arg[y])
		{
			if (format[x] == s_arg[y] && e)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(printall, int)), e = 1;
				break;
			case 'i':
				printf("%d", va_arg(printall, int)), e = 1;
				break;
			case 'f':
				printf("%f", va_arg(printall, double)), e = 1;
				break;
			case 's':
				put = va_arg(printall, char*), e = 1;
				if (!put)
				{
					printf("(nil)");
					break;
				}
				printf("%s", put);
				break;
		} x++;
	}
	printf("\n"), va_end(printall);
}
