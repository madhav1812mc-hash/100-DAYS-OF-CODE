#include <stdio.h>

int main() {
    char str[200];
    int max = 0, len = 0, start = 0, pos = 0;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            if(len > max) {
                max = len;
                pos = start;
            }
            len = 0;
            start = i + 1;
        } else {
            len++;
        }

        if(str[i] == '\0')
            break;
    }

    for(int i = pos; i < pos + max; i++) {
        printf("%c", str[i]);
    }

    return 0;
}