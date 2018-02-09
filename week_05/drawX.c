/*
Computer Programming - Lab Week 05
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

signed main() {
    /* Main function */
    signed num;
    scanf("%i", &num);

    for (signed i = 0; i < num; i++) {
        for (signed j = 0; j < num; j++) {
            if (i == j || i+j == num-1) {
                putchar('-');
                continue;
            }
            putchar('#');
        }
        putchar('\n');
    }

    return 0;
}
