/*
C Programming Practice - Multiply Matrix
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

float multiply(float **matrix_a, float **matrix_b, int q, int select_i, int select_j);

int main() {
    /* Main function */
    // Input matrix size
    int p, q, r;
    printf("p: "); scanf("%i", &p);
    printf("q: "); scanf("%i", &q);
    printf("r: "); scanf("%i", &r);

    float *matrix_a[p], *matrix_b[q], matrix_result[p][r];

    // Memory Allocation for pointer matrices
    for (int i = 0; i < p; i++) {
        matrix_a[i] = (float*)malloc((q+1)*sizeof(float));
    }
    for (int i = 0; i < q; i++) {
        matrix_b[i] = (float*)malloc((r+1)*sizeof(float));
    }

    // Input values for matrix_a
    printf("- Matrice A -\n");
    for (int i = 0; i < p; i++) {
        printf("Row #%i: ", i);
        for (int j = 0; j < q; j++) {
            scanf("%f", &matrix_a[i][j]);
        }
    }

    // Input values for matrix_b
    printf("- Matrice B -\n");
    for (int i = 0; i < q; i++) {
        printf("Row #%i: ", i);
        for (int j = 0; j < r; j++) {
            scanf("%f", &matrix_b[i][j]);
        }
    }

    // Calculate result matrix
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            matrix_result[i][j] = multiply(matrix_a, matrix_b, q, i, j);
            printf("%g\t", matrix_result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

float multiply(float **matrix_a, float **matrix_b, int q, int select_i, int select_j) {
    /* Multiply matrice a's row with matrice b's column */
    float result = 0;

    // Calculate Result
    for (int i = 0; i < q; i++) {
        result += (matrix_a[select_i][i] * matrix_b[i][select_j]);
    }

    return result;
}
