#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void generatePassword(int length) {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    int charSize = strlen(characters);

