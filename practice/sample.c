/*
C Programming Practice - Sample File
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include "my_lib.h"

int main() {
    /* Main function */
    int a = 11, b = 1998;
    double c[20] = {-20, 1999, 13, 44, 112, 11, -1, 20, -45};

    printf("a: %i\t\tb: %i\n", a, b);
    swap(a, b);
    printf("a: %i\t\tb: %i\n", a, b);
    printf("more: %i\tless: %i\n", more(a, b), less(a, b));
    printf("max: %.2f\tmin: %.2f\n", max(c), min(c));

    return 0;
}
