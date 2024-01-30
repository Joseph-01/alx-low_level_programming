#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  int count;
  for(count = 0; count < argc; count++)
  {
    printf("%s\n", argv[count]);
  }
  
  return 0;
}