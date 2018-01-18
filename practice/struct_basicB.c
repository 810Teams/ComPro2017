/*
C Programming Practice - Struct Basic B
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <string.h>

struct Phone {
    /* Phone struct */
    char name[30];
    char tel[13];
};

struct Phone newPhone(void);
void displayPhone(struct Phone p);
struct Phone changePhone(struct Phone p);

int main() {
    /* Main function */
    struct Phone friend = newPhone();
    displayPhone(friend);
    friend = changePhone(friend);
    displayPhone(friend);

    return 0;
}

struct Phone newPhone(void) {
    /* Function: New Phone */
    struct Phone p = {"My Friend", "089-112-4489"};
    return p;
};

void displayPhone(struct Phone p) {
    /* Function: Display Phone */
    printf("%s: %s\n", p.name, p.tel);
}

struct Phone changePhone(struct Phone p) {
    /* Function: Change Phone */
    strcpy(p.tel, "091-234-5678");
    return p;
}
