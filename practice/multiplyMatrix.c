/*
C Programming Practice - Multiply Matrix
Teerapat Kraisrisirikul
*/

#include <stdio.h>

float multiply(float *matrix_a, float *matrix_b, int size_i, int size_j, int select_i, int select_j);

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
            matrix_result[i][j] = multiply(*matrix_a, *matrix_b, p, q, i, j);
        }
    }

    // Show matrix
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf("%.2f ", matrix_result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

float multiply(float *matrix_a, float *matrix_b, int size_i, int size_j, int select_i, int select_j) {
    /* Multiply matrice a's row with matrice b's column */
    float row[size_i], column[size_i];
    float result = 0;
    int count;

    // Get selected row
    count = 0;
    for (int i = 0; i < size_j; i++) {
        row[count] = matrix_a[i + select_i * size_j];
        count++;
    }

    // Get selected column
    count = 0;
    for (int i = 0; i < size_j; i++) {
        column[count] = matrix_b[i * size_i + select_j];
        count++;
    }

    // Add up results
    for (int i = 0; i < size_j; i++) {
        result += row[i] * column[i];
    }

    return result;
}
