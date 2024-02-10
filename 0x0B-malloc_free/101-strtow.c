#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow- a program that that splits a string into words
 *@str: string
 *Return: pointer to an array of strings (word)
 */

char **strtow(char *str)
{
	int a, b, c = 0, i, j, user = 0, dump;
	char **word;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			user++;
	if (user == 0)
		return (NULL);
	word = malloc((user + 1) * sizeof(char *));
	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	for (a = 0; str[a] != '\0' && c < user; a++)
	{
		if (str[a] != ' ')
		{
			dump = 0;
			for (b = a; str[b] != ' ' && str[b] != '\0'; b++)
				dump++;
			word[c] = malloc((dump + 1) * sizeof(char));
			if (word[c] == NULL)
			{
				for (j = 0; j < c; j++)
					free(word[c]);
				free(word);
				return (NULL);
			}
			for (i = 0; i < dump; i++, a++)
				word[c][i] = str[a];
			word[c][i] = '\0', c++;
		}
	}
	word[c] = NULL;
	return (word);
}
