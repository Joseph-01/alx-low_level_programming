#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - a function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a parameter.
 *@str: string
 *Return: address of the newly allocated memory
 */
char *_strdup(char *str)
{
	char *dump;
	int i, core = 0;

	if (str == NULL)
		return (NULL);
	while (str[core] != '\0')
		core++;
	dump = (char *)malloc((sizeof(char) * core) + 1);
	if (dump == NULL)
		return (NULL);
	for (i = 0; i < core; i++)
		dump[i] = str[i];
	dump[core] = '\0';

	return (dump);
}
