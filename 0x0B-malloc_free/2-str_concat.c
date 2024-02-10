#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - a program that concatenates two strings
 *@s1: first string character
 *@s2: second string character
 *Return: address of the newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, dump1, dump2, dump;
	char *paste;

	dump1 = dump2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			dump1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			dump2++;
	}
	dump = dump1 + dump2;
	paste = (char *)malloc(sizeof(char) * (dump + 1));
	if (paste == NULL)
		return (NULL);
	for (i = 0; i < dump1; i++)
		paste[i] = s1[i];
	for (j = 0; j < dump2; j++, i++)
		paste[i] = s2[j];
	paste[dump] = '\0';

	return (paste);
}
