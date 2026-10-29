#include <stdio.h>

int main() {
    int r, c, r2, c2;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];

    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if(r != r2 || c != c2) {
        return 0;
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}