#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *pf = fopen(filename, "r");
    char *buffer;
    buffer = malloc(sizeof(char) * letters);
    if (pf == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        while (fgets(buffer, 200, pf) != NULL)
        {
            printf("%s", buffer);
        }
        fclose(pf);
    }

    printf("\n");
    return (0);
}
