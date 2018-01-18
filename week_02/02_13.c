/*
Computer Programming - Lab Week 02
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>

int main() {
    /* Main function */
    char num[6], newline = '\n';
    scanf("%s", num);

    printf("%1.1s", num);
    putchar(newline);
    printf("%3.2s", num);
    putchar(newline);
    printf("%5.3s", num);
    putchar(newline);
    printf("%7.4s", num);
    putchar(newline);
    printf("%9.5s", num);
    putchar(newline);

    return 0;
}