#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float **matrix_new(int n_rows, int n_cols)
{
    size_t mem_len = n_rows * n_cols * sizeof(float);
    float *matrix_ptr = MALLOC(mem_len);
    if (matrix_ptr == NULL)
    {
        exit(4);
    }
    size_t vect_len = sizeof(float *) * n_rows;
    float **matrix_vect_ptr = (float **)MALLOC(vect_len);
    if (matrix_vect_ptr == NULL)
    {
        exit(5);
    }
    int row, col;
    for (row = 0; row < n_rows; row++)
    {
        matrix_vect_ptr[row] = &(matrix_ptr[row * n_cols]);
    }
    return matrix_vect_ptr;
}

void matrix_delete(float **matrix)
{
    FREE(*matrix);
    FREE(matrix);
}

void matrix_fill(float **matrix, int n_rows, int n_cols, float valor)
{
    for (int row = 0; row < n_rows; row++)
    {
        for (int col = 0; col < n_cols; col++)
        {
            matrix[row][col] = valor;
        }
    }
}

void matrix_print(float **matrix, int n_rows, int n_cols)
{
    for (int row = 0; row < n_rows; row++)
    {
        for (int col = 0; col < n_cols; col++)
        {
            printf("[%d][%d]=%d | ", row, col, matrix[row][col]);
        }
        printf("\n");
    }
}

float **matrix_mul(float **matrix_a, int n_rows_a, int n_cols_a, float **matrix_b, int n_rows_b, int n_cols_b)
{
    if (n_cols_a == n_rows_b)
    {
        int n_rows_c = n_rows_a;
        int n_cols_c = n_cols_c;
        float **matrix_c = matrix_new(n_rows_c, n_cols_c);
        for (int i = 0; i < n_rows_c; i++)
        {
            for (int k = 0; k < n_cols_c; k++)
            {
                matrix_c[i][k] = 0;
                for (int j = 0; j < n_cols_a; j++)
                {
                    matrix_c[i][k] = matrix_a[i][j] * matrix_b[j][k];
                }
            }
        }
        return matrix_c;
    }
    return NULL;
}