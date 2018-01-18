/*
C Programming Practice - malloc()
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Main function */
    int num;
    char *buffer;

    printf("Input: ");
    scanf("%i", &num);

    buffer = (char*)malloc((num+1)*sizeof(char));

    if (buffer == NULL) {
        printf("Error: Not able to allocate memory by malloc()\n");
    }
    else {
        for (int i = 0; i < num; i++) {
            buffer[i] = rand()%26 + 'a';
        }
        buffer[num] = '\0';
        printf("Random generated string: %s\n", buffer);
    }

    free(buffer);

    return 0;
}
