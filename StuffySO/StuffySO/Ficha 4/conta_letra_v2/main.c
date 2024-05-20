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
#include "conta_letra.h"

#define EXIT_CMDLINE_PARSER_ERROR (1)

int main(int argc, char *argv[]) {
    struct gengetopt_args_info args_info;
    if (cmdline_parser(argc, argv, &args_info) != 0) {
        exit(EXIT_CMDLINE_PARSER_ERROR);
    }

    /*if(argc!=5)
    {
        fprintf(stderr,"[ERROR] 2 arguments expected.\n");
        fprintf(stderr,"[ERROR] Usage:%s <text> <char>.\n",argv[0]);
        return 1;
    }*/

    char *text=args_info.string_arg;
    char *char_string=args_info.letra_arg;

    if(strlen(char_string)!=1)
    {
        fprintf(stderr,"[ERROR] Second argument must be single char.\n");
        fprintf(stderr,"[ERROR] Usage:%s <text> <char>.\n",argv[0]);
        return 2;
    }

    char c = char_string[0];

    int num = conta_letra(text,c);

    printf("Num de %c em %s: %d\n",c,text,num);

    cmdline_parser_free(&args_info);

    return 0;
}
