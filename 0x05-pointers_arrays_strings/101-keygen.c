#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generateRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

void generatePassword(char *password) {
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time
    
    char password[PASSWORD_LENGTH + 1];
    generatePassword(password);
    
    printf("Generated password: %s\n", password);
    
    return 0;
}

