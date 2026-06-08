#include <stdio.h>

int main()
{
    int a, b, c, i, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    for (i = max; ; i++)
    {
        if (i % a == 0 && i % b == 0 && i % c == 0)
        {
            printf("Output: %d", i);
            break;
        }
    }

    return 0;
}
