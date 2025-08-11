#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generatethePassword(int length) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    int charSize = strlen(characters);
char password[length + 1];

    for (int i = 0; i < length; i++) {
        password[i] = characters[rand() % charSize];
    }
    password[length] = '\0';

    __printf("Generated Password: %s\n", password);
}

int main() {
    int length;

    printf("Enter desired password length: ");
    scanf("%d", &length);

    if (length < 4) {
        printf("Password length should be at least 4 characters.\n");
        return 1;
    }
    srand(time(0));
______
    generatePassword(length);

    return 0;





