#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generatePassword(int length) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    int charSize = strlen(characters);
char password[length + 1]; // +1 for null terminator

    for (int i = 0; i < length; i++) {
        password[i] = characters[rand() % charSize];
    }
    password[length] = '\0'; // Null-terminate the string

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;

    printf("Enter desired password length: ");
    scanf("%d", &length);
