#include <stdio.h>

int main() {
    int n, arr[100], num, i, pos;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    pos = n;
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    n++;


    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}