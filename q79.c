#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int d = 0; d < r + c - 1; d++) {
        if(d % 2 == 0) {
            for(int i = r - 1; i >= 0; i--) {
                int j = d - i;
                if(j >= 0 && j < c)
                    printf("%d ", a[i][j]);
            }
        } else {
            for(int j = c - 1; j >= 0; j--) {
                int i = d - j;
                if(i >= 0 && i < r)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}