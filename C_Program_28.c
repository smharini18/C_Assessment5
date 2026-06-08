#include <stdio.h>

int main()
{
    int a, b, i, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    for (i = max; ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("Output: %d", i);
            break;
        }
    }
    return 0;
}
