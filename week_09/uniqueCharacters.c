/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int min(int a, int b);
int max(int a, int b);

int main() {
    /* Main function */
    char text[256], new[256], temp[256];
    scanf("%[^\n]", text);

    // Overall Process
    int j, ignored = 0;
    while (1) {
        j = 0;
        ignored = 0;
        strcpy(new, "");
        strcpy(temp, "");

        // Check each alphabet
        for (short i = 0; i < strlen(text); i++) {
            if (i > 0 && text[i] == text[i-1]) {
                ignored = 1;
            }
            else if (i < strlen(text)-1 && text[i] == text[i+1]) {
                ignored = 1;
            }
            else {
                new[j] = text[i];
                j++;
            }
        }
        new[j] = '\0';

        // Swap
        strcpy(temp, text);
        strcpy(text, new);
        strcpy(new, temp);

        if (!ignored)
            break;

        printf("%s\n", text);
    }

    return 0;
}

int min(int a, int b) {
    /* Returns minimum value */
    return (a > b) * b + (a <= b) * a;
}

int max(int a, int b) {
    /* Returns minimum value */
    return (a < b) * b + (a >= b) * a;
}
