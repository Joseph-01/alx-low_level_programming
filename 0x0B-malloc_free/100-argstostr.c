#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - to concatenate all arguments of the program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fails, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0, total = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*a = av[x][y];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retp);
}
