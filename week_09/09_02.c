/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>

int main() {
    /* Main function */
    int size;
    char text_a[64], text_b[64];
    scanf("%i %[^\n] %[^\n]", &size, text_a, text_b);

    // Upper Border
    for (short i = 0; i < size; i++)
        putchar('*');

    // Inside
    printf("\n");
    printf("*%*s%s%*s*\n", (size-2-strlen(text_a))/2+(strlen(text_a)%2 != size%2), "", text_a, (size-2-strlen(text_a))/2, "");
    printf("*%*s%s%*s*\n", (size-2-strlen(text_b))/2+(strlen(text_b)%2 != size%2), "", text_b, (size-2-strlen(text_b))/2, "");

    // Lower Border
    for (short i = 0; i < size; i++)
        putchar('*');

    printf("\n");

    return 0;
}
