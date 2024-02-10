#include <stdlib.h>
#include "main.h"

/**
 *array_range - creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *
 *Return: pointer to newly created array.
 *NULL if malloc fails &&  if min > max.
 */
int *array_range(int min, int max)
{
	int ran;
	int x;
	int *p;

	ran = 0;

	if (min > max)
		return (NULL);

	ran = ((max + 1) - min);

	p = malloc(ran * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (x = 0; x < ran; x++)
	{
		*(p + x) = min + x;
	}

	return (p);
}
