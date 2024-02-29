#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;
	va_start(args, n);

	sum = 0;
	for(i = 0; i <= n; i++) {
		sum = sum + va_arg(args,  int);
	}
	va_end(args);
	return (sum);

}
