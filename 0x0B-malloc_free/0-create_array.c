#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - a function that creates an array of chars,
 *and initializes it with a specific char
 *@c: initial value
 *@size: arrays size
 *Return: memorys address to be printed
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *yArray;

	if (size == 0)
		return (NULL);

	/* Return to the pointer's allocated memory */
	yArray = malloc(size * sizeof(char));

	if (yArray == NULL)
		return (NULL);
	y = 0;
	while (y < size)
	{
		yArray[y] = c;
		y++;
	}
	return (yArray);
}
