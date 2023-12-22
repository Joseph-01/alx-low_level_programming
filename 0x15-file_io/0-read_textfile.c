#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t bytesRead;
    char buffer[500];
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        /* Handle error opening the file*/
        perror("Error opening file");
        return -1; 
    }

    bytesRead = read(fd, buffer, letters);

    if (bytesRead == -1)
    {
        /* Handle error reading from the file*/
        perror("Error reading file");
        close(fd);
        return -1; /* or another error indicator*/
    }

    /* Process the data in the buffer or do something with bytesRead*/

    close(fd);
    return bytesRead; /* Number of bytes read*/
}
