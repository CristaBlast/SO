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

#include "debug.h"
#include "memory.h"

int main(int argc, char *argv[]) {
    if(argc!=2)
    {
        fprintf(stderr,"usage %s <file>\n",argv[0]);
        exit(1);
    }
    char *filename = "data.txt";
    int fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC,0644);
    if (fd == -1)
    {
        ERROR(1,"ERRO ao abrir ficheiro %s",filename);
    }
    char s[] = "Bruh\n";
    size_t count = strlen(s);
    ssize_t res_write = write(1,s,count);
    if(res_write != (ssize_t) count)
    {
        ERROR(1,"ERROR ao escrever no ficheiro %s",filename);
    }
    int res_close = close(fd);
    if (res_close == -1)
    {
        ERROR(1,"ERROR ao fechar o ficheiro %s",filename);
    }
    return 0;
}

/*int main(int argc, char *argv[]) {
    if(argc!=2)
    {
        fprintf(stderr,"usage %s <file>\n",argv[0]);
        exit(1);
    }
    char *filename = "data.txt";
    int fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC,0644);
    if (fd == -1)
    {
        ERROR(1,"ERRO ao abrir ficheiro %s",filename);
    }
    printf("fd = %d\n",fd);
    int v[5] = {1,2,3,4,5};
    size_t count = sizeof(v);
    ssize_t res_write = write(fd,v,count);
    if(res_write != (ssize_t) count)
    {
        ERROR(1,"ERROR ao escrever no ficheiro %s",filename);
    }
    int res_close = close(fd);
    if (res_close == -1)
    {
        ERROR(1,"ERROR ao fechar o ficheiro %s",filename);
    }
    return 0;
}*/

/*int main(int argc, char *argv[]) {
    if(argc!=2)
    {
        fprintf(stderr,"usage %s <file>\n",argv[0]);
        exit(1);
    }
    char *filename = "data.txt";
    int fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC,0644);*//*S_IRUSR | S_IWUSR | S_IRGRP|S_IROTH); //0644*/
    /*if (fd == -1)
    {
        ERROR(1,"ERRO ao abrir ficheiro %s",filename);
    }
    printf("fd = %d\n",fd);
    int x = 256;
    size_t count = sizeof(x);
    ssize_t res_write = write(fd,&x,count);
    if(res_write != (ssize_t) count)
    {
        ERROR(1,"ERROR ao escrever no ficheiro %s",filename);
    }
    int res_close = close(fd);
    if (res_close == -1)
    {
        ERROR(1,"ERROR ao fechar o ficheiro %s",filename);
    }
    return 0;
}*/

/*int main(int argc, char *argv[]) {
    char *filename = "data.txt";
    int fd = open(filename,O_RDONLY);
    if (fd == -1)
    {
        ERROR(1,"ERRO ao abrir ficheiro %s",filename);
    }
    printf("fd = %d\n",fd);
    int res_close = close(fd);
    if (res_close == -1)
    {
        ERROR("ERROR ao fechar o ficheiro %s",filename);
    }
    
    

    return 0;
}*/