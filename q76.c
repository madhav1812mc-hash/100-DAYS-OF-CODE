#include <stdio.h>

int main() {
    int r, c, flag = 1;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if(r != c) {
        flag = 0;
    } else {
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(a[i][j] != a[j][i]) {
                    flag = 0;
                }
            }
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}