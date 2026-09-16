#include <stdio.h>

int main()
{
    int num, first, last, temp, power = 1, result;

    scanf("%d", &num);

    last = num % 10;

    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = num - first * power - last;
    result = result + last * power + first;

    printf("%d", result);

    return 0;
}