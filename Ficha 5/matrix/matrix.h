#ifndef _MATRIX_H_
#define _MATRIX_H_

float **matrix_new(int n_rows,int n_cols);

void matrix_delete(float **matrix);

void matrix_fill(float **matrix,int n_rows,int n_cols,float valor);

void matrix_print(float **matrix,int n_rows,int n_cols);

float **matrix_mul(float **matrix_a,int n_rows_a,int n_cols_a,float **matrix_b,int n_rows_b,int n_cols_b);

#endif
