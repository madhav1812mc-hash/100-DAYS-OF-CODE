#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}