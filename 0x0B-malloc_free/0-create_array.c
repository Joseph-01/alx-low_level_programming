#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
*@create_array cretes array of size t
*@params size: size of array
*@params char c: character to add to array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
ptr = (char *)malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
printf("\n");
return (ptr);
}