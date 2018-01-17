/*
C Programming Practice - Multiply Matrix
Teerapat Kraisrisirikul
*/

#include <stdio.h>

float multiply(float *matrix_a, float *matrix_b, int p, int q, int r, int select_i, int select_j);

int main() {
    /* Main function */
    // Input matrix size
    int p, q, r;
    printf("p: "); scanf("%i", &p);
    printf("q: "); scanf("%i", &q);
    printf("r: "); scanf("%i", &r);

    float matrix_a[p][q], matrix_b[q][r], matrix_result[p][r];

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
            matrix_result[i][j] = multiply(*matrix_a, *matrix_b, p, q, r, i, j);
            printf("%.2f ", matrix_result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

float multiply(float *matrix_a, float *matrix_b, int p, int q, int r, int select_i, int select_j) {
    /* Multiply matrice a's row with matrice b's column */
    float result = 0;

    // Calculate Result
    for (int i = 0; i < q; i++) {
        result += matrix_a[i + select_i * q] * matrix_b[i * r + select_j];
    }

    return result;
}
