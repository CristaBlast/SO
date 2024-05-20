#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>

#include "debug.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        ERROR(1, "expecting 1 argument, got %d\nSysntax: %s filename", argc - 1,
              argv[0]);
    }

    /* Insira o seu código aqui */

    return 0;
}
