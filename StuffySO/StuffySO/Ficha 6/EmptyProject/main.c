/**
 * @file main.c
 * @brief Description
 * @date 2018-1-1
 * @author name of author
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <time.h>

#include "debug.h"
#include "memory.h"

void write_check(int fd, const void *buf, size_t n, char *filename); //TODO 4 

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage %s <file>\n", argv[0]);
        exit(1);
    }
    char *filename = "data.txt";
    int fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd == -1)
    {
        ERROR(1, "ERRO ao abrir ficheiro %s", filename);
    }

    int v[5] = {1, 2, 3, 4, 5};
    size_t count = sizeof(v);
    write_check(1, v, count, filename);
    char buffer[4];
    

    printf("Result string is \"%s\"\n", outstr);
    exit(EXIT_SUCCESS);
    int res_close = close(fd);
    if (res_close == -1)
    {
        ERROR(1, "ERROR ao fechar o ficheiro %s", filename);
    }
    return 0;
}

void write_check(int fd, const void *buf, size_t n, char *filename)
{
    ssize_t res_write = write(fd, buf, n);
    if (res_write != (ssize_t)n)
    {
        ERROR(1, "ERROR ao escrever no ficheiro %s", filename);
    }
}