#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch == ' ')
            spaces++;
        else if(ch >= '0' && ch <= '9')
            digits++;
        else if(!((ch >= 'a' && ch <= 'z') ||
                  (ch >= 'A' && ch <= 'Z') || ch == '\n'))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}