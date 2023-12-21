#include <stdio.h>
#include <string.h>

int isLowerCase(char c) {
    return (c >= 'a' && c <= 'z');
}

int isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z');
}

int isDigit(char c) {
    return (c >= '0' && c <= '9');
}

int isSpecialCharacter(char c) {
    char specialChars[] = "!@#$%^&*()-+";
    for (int i = 0; i < strlen(specialChars); i++) {
        if (c == specialChars[i]) {
            return 1; 
        }
    }
    return 0; 
}

int isStrongPassword(char password[]) {
    int len = strlen(password);
    int hasLowerCase = 0; // false
    int hasUpperCase = 0; // false
    int hasDigit = 0;     // false
    int hasSpecialChar = 0; // false

    if (len < 8) {
        return 0; // false, Password length is less than 8
    }

    for (int i = 0; i < len; i++) {
        if (isLowerCase(password[i])) {
            hasLowerCase = 1; // true
        } else if (isUpperCase(password[i])) {
            hasUpperCase = 1; // true
        } else if (isDigit(password[i])) {
            hasDigit = 1; // true
        } else if (isSpecialCharacter(password[i])) {
            hasSpecialChar = 1; // true
        }
    }

    return (hasLowerCase && hasUpperCase && hasDigit && hasSpecialChar);
}

int main() {
    char password[50];

    printf("Enter the password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) {
        printf("The password is strong.\n");
    } else {
        printf("The password is not strong.\n");
    }

    return 0;
}

