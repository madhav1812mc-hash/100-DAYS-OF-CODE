#include <stdio.h>

int main() {
    char a[100], b[100];
    int freq[256] = {0}, flag = 1;

    scanf("%s", a);
    scanf("%s", b);

    for(int i = 0; a[i] != '\0'; i++) {
        freq[(unsigned char)a[i]]++;
    }

    for(int i = 0; b[i] != '\0'; i++) {
        freq[(unsigned char)b[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}