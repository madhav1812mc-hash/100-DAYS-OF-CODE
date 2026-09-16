#include <stdio.h>

int main()
{
    int num, original, digit, sum = 0;

    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}