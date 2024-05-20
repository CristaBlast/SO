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
#include "matrix.h"


#define EXIT_CMDLINE_PARSER_ERROR (1)

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "expecting two arguments\n");
        fprintf(stderr, "%s <num_rows> <num_cols>\n", argv[0]);
        exit(1);
    }

    int a_rows = atoi(argv[1]);
    int a_cols = atoi(argv[2]);
    int b_rows = atoi(argv[3]);
    int b_cols = atoi(argv[4]);

    float **matrix_a=matrix_new(a_rows,a_cols);
    float **matrix_b=matrix_new(b_rows,b_cols);
    matrix_fill(matrix_a,a_cols,a_cols,2.0);
    matrix_fill(matrix_b,b_cols,b_cols,4.0);
    float **matrix_c=matrix_mul(matrix_a,a_rows,a_cols,matrix_b,b_rows,b_cols);
    matrix_print(matrix_a,a_rows,a_cols);
    matrix_print(matrix_b,b_rows,b_cols);
    matrix_print(matrix_c,a_rows,b_cols);
    matrix_delete(matrix_a);
    matrix_delete(matrix_b);
    matrix_delete(matrix_c);
    
    return 0;
}
