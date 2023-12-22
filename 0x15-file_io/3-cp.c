#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

void error_and_exit(int code, const char *message)
{
    dprintf(2, "%s\n", message);
    exit(code);
}

int main(int argc, char *argv[])
{
    int fd_to;
    int fd_from;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;
    if (argc != 3)
    {
        error_and_exit(97, "Usage: cp file_from file_to");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        error_and_exit(98, "");
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to file %s\n", argv[2]);
        error_and_exit(99, "");
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            dprintf(2, "Error: Write to file %s failed\n", argv[2]);
            error_and_exit(99, "");
        }
    }

    if (bytes_read == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        error_and_exit(98, "");
    }

    if (close(fd_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_from);
        error_and_exit(100, "");
    }

    if (close(fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", fd_to);
        error_and_exit(100, "");
    }

    return 0;
}
