/*
C Programming Practice - Sample File
Teerapat Kraisrisirikul
*/

#include <stdio.h>

void editmatrix(int **matrix);

int main() {
    /* Main function */
    int *matrix[3];

    for (int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(4*sizeof(int));
    }

    return 0;
}
