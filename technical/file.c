/*
C Programming Practice - Testing file
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Main function */
    int *matrice[3];

    for (int i = 0; i < 3; i++) {
        matrice[i] = (int*)malloc(4*sizeof(int));
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrice[i][j] = rand()%101;
            printf("%i ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
