/*
C Programming Practice - Testing file
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct listData *linkNext;
struct listData {
    int data;
    linkNext next;
};

int main() {
    /* Main function */
    linkNext link, temp;
    link = NULL;

    int num;

    while (&free) {
        printf("Enter number: ");
        scanf("%i", &num);
        if (num == 0) {
            break;
        }
        temp = (linkNext)malloc(sizeof(struct listData));
        temp->data = num;
        temp->next = link;
        link = temp;
    }

    temp = link;

    while (temp != NULL) {
        printf("\nOutput: %i", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
