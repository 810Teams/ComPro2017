/*
My Library
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

// General Functions
#define swap(a, b) {\
    a += b;\
    b = a - b;\
    a -= b;\
}
#define more(a, b) ((a >= b) ? a : b)
#define less(a, b) ((a <= b) ? a : b)

double max(double *a) {
    double x = a[0];
    for (int i = 0; i < sizeof(a); i++) {
        if (a[i] > x) {
            x = a[i];
        }
    }
    return x;
}

double min(double *a) {
    double x = a[0];
    for (int i = 0; i < sizeof(a); i++) {
        if (a[i] < x) {
            x = a[i];
        }
    }
    return x;
}

// Logic Functions
#define and(a, b) (a && b)
#define or(a, b) (a || b)
#define not(a) (!a)
#define xor(a, b) (a != b)
#define nand(a, b) (!(a && b))
#define nor(a, b) (!(a || b))
#define xnor(a, b) (a == b)
#define then(a, b) (!(a && !b))
#define logicchar(a) (a ? 'T' : 'F')
