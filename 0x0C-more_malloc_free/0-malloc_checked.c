#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *malloc_checked - a program that cause normal process terminatio
 *with a status value of 98
 *@b: memory's allocation
 *Return: bin
 */
void *malloc_checked(unsigned int b)
{
	void *bin;

	bin = malloc(b);
	if (bin == NULL)
		exit(98);
	return (bin);
}
