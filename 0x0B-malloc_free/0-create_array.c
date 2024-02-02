#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
 unsigned int i;
 char *ptr;
 ptr = (char *)malloc(sizeof(char) * size);
 for (i=0; i<size; i++) {
  ptr[i] = c; 
 }
 return (ptr); 
}