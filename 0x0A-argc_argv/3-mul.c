/*#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int result = 1;
    int i;
    if (argc < 2) {
        printf("Error\n");
        return (1);
    }
    
    
    for (i = 1; i < argc; i++) {
        result *= atoi(argv[i]);
    }
    
    printf("%d\n", result);
    
    return (0);
}*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplytwo numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}