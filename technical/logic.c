/*
C Programming Practice - Logic (Discrete Math)
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdbool.h>

bool if_then(bool a, bool b);
bool equation(bool p, bool q, bool r);
char logicchar(bool a);

int main() {
    /* Main function */
    // Boolean values
    bool p = true;
    bool q = true;
    bool r = true,
    bool x;

    printf("p\tq\tr\tx\n");
    printf("--------------------------\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                x = equation(p, q, r);
                printf("%c\t%c\t%c\t%c\n", logicchar(p), logicchar(q), logicchar(r), logicchar(x));
                r = !r;
            }
            q = !q;
        }
        p = !p;
    }

    return 0;
}

bool if_then(bool a, bool b) {
    /* if..then logic */
    return !(a && !b);
}

bool equation(bool p, bool q, bool r) {
    /* Boolean Expression Manual Edit */
    return (if_then(p, q) || if_then(q, r));
}

char logicchar(bool a) {
    /* Get logic char */
    if (a) {
        return 'T';
    }
    return 'F';
}
