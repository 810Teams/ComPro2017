/*
Computer Programming - Week 09
Teerapat Kraisrisirikul (60070183)
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define lowerall(text) {\
    for (short i = 0; i < strlen(text); i++)\
        text[i] = tolower(text[i]);\
}

int main() {
    /* Main function */
    char text[256], words[128][256];
    scanf("%[^\n]", text);

    // Supporting counter variables
    int length = 0, index = 0, j = 0;

    // Moving each word from 'text' to 'words'
    for (short i = 0; i < 256; i++) {

        // Case: Founding spacebar or '\0'
        if (text[i] == ' ' || text[i] == '\0') {
            for (j = 0; j < length; j++) {
                words[index][j] = text[i-length+j];
            }
            words[index][j] = '\0';
            lowerall(words[index])
            length = 0;
            index++;
        }
        else
            length++;

        // Case: END OF TEXT
        if (text[i] == '\0')
            break;
    }

    // Output
    printf("%i words\n", index);
    printf("----\n");
    for (short i = 0; i < index; i++)
        printf("%s : %lu\n", words[i], strlen(words[i]));

    return 0;
}




















