/*
C Programming Practice - Contact Struct
Teerapat Kraisrisirikul
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    short day;
    short month;
    short year;
};

struct Contact {
    char firstname[31];
    char lastname[31];
    char nickname[11];
    char tel[11];
    struct Date birthday;
};

void displayContact(struct Contact data);
struct Contact editName(struct Contact data);
struct Contact editNickname(struct Contact data);
struct Contact editTel(struct Contact data);
struct Contact editBirthday(struct Contact data);

int main() {
    /* Main function */
    struct Contact myself = {"Teerapat", "Kraisrisirikul", "Saint", "0860864192", {15, 6, 1999}};
    char cmd;

    while (&free) {
        printf(">> ");
        scanf(" %c", &cmd);
        if ((strcmp(&cmd, "e")) == 0) {
            break;
        }
        else if ((strcmp(&cmd, "d")) == 0) {
            displayContact(myself);
        }
        else if ((strcmp(&cmd, "f")) == 0) {
            myself = editName(myself);
        }
        else if ((strcmp(&cmd, "n")) == 0) {
            myself = editNickname(myself);
        }
        else if ((strcmp(&cmd, "t")) == 0) {
            myself = editTel(myself);
        }
        else if ((strcmp(&cmd, "b")) == 0) {
            myself = editBirthday(myself);
        }
        else {
            printf("Error: Command '%c' not found.\n", cmd);
        }
    }
    return 0;
}

void displayContact(struct Contact data) {
    /* Function: Display Contact */
    printf("[Contact Info]\n");
    printf("Name: %s %s\n", data.firstname, data.lastname);
    printf("Nickname: %s\n", data.nickname);
    printf("Tel: %s\n", data.tel);
    printf("Birthday: %02i/%02i/%i\n", data.birthday.day, data.birthday.month, data.birthday.year);
}

struct Contact editName(struct Contact data) {
    char new_firstname[31], new_lastname[31];
    printf("New Name: ");
    scanf(" %s %s", new_firstname, new_lastname);
    strcpy(data.firstname, new_firstname);
    strcpy(data.lastname, new_lastname);
    return data;
}

struct Contact editNickname(struct Contact data) {
    printf("New Nickname: ");
    char new_nickname[11];
    scanf("%s", new_nickname);
    strcpy(data.nickname, new_nickname);
    return data;
}

struct Contact editTel(struct Contact data) {
    printf("New Tel: ");
    char new_tel[11];
    scanf("%s", new_tel);
    strcpy(data.tel, new_tel);
    return data;
}

struct Contact editBirthday(struct Contact data) {
    int new_day, new_month, new_year;
    printf("New Birthday: ");
    scanf("%i/%i/%i", &new_day, &new_month, &new_year);
    data.birthday.day = new_day;
    data.birthday.month = new_month;
    data.birthday.year = new_year;
    return data;
}
