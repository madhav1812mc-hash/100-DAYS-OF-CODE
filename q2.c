#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, diff, product, quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    if(num2 != 0)
    {
        quotient = num1 / num2;

        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", diff);
        printf("Product = %d\n", product);
        printf("Quotient = %d\n", quotient);
    }
    else
    {
        printf("Sum = %d\n", sum);
        printf("Difference = %d\n", diff);
        printf("Product = %d\n", product);
        printf("Quotient is not possible (division by zero).\n");
    }

    return 0;
}