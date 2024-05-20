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

#include "debug.h"
#include "memory.h"
#include "args.h"
#include "bytes_for_int.h"

#define EXIT_CMDLINE_PARSER_ERROR (1)

int main(int argc, char *argv[]) {
    struct gengetopt_args_info args_info;
    if (cmdline_parser(argc, argv, &args_info) != 0) {
        exit(EXIT_CMDLINE_PARSER_ERROR);
    }

    if (args_info.num_arg < 0)
    {
        fprintf(stderr,"[ERROR] only positiove number allowed.\n");
    }
    unsigned int n = args_info.num_arg;
    int bytes = bytes_for_int(n);
    printf("%d bytes required for %u\n",bytes,n);


    cmdline_parser_free(&args_info);

    return 0;
}
