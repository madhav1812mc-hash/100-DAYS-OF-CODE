#include <stdio.h>

int main()
{
    int num, digit, complement = 0, place = 1;

    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        num = num / 10;
    }

    printf("%d", complement);

    return 0;
}