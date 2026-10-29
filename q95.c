#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];

    scanf("%s", a);
    scanf("%s", b);

    strcpy(temp, a);
    strcat(temp, a);

    if(strlen(a) == strlen(b) && strstr(temp, b) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}