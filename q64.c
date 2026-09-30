#include <stdio.h>

int main()
{
    long long num;
    int digit, i;
    int count[10] = {0};
    int maxDigit = 0;

    scanf("%lld", &num);

    if(num < 0)
    {
        num = -num;
    }

    if(num == 0)
    {
        count[0] = 1;
    }

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(i = 1; i < 10; i++)
    {
        if(count[i] > count[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}