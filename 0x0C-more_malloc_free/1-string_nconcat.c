#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - a program that concatenates two strings
 *@s1: the first character
 *@s2: the second character
 *@n: the integer that has been unsigned
 *Return: the pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int x = 0, y = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
		num1++;
	while (s2 && s2[num2])
		num2++;
	if (n < num2)
		m = malloc(sizeof(char) * (num1 + n + 1));
	else
		m = malloc(sizeof(char) * (num1 + num2 + 1));
	if (!m)
		return (NULL);
	while (x < num1)
	{
		m[x] = s1[x];
		x++;
	}
	while (n < num2 && x < (num1 + n))
		m[x++] = s2[y++];
	while (n >= num2 && x < (num1 + num2))
		m[x++] = s2[y++];
	m[x] = '\0';
	return (m);
}
