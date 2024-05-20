#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "debug.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "write_file: wrong number of parameters.\n");
        fprintf(stderr, "usage: write_file <file>\n");
        exit(1);
    }

    /* Introduza o seu código aqui */

    printf("DONE\n");

    // para ver os ints:
    // od -tx1 teste

    // para ver o texto
    // od -c teste
    // cat teste

    return 0;
}
