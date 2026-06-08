#include <stdio.h>
int main()
{
    int a, b, i, min, hcf;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    hcf = 1;

    for (i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("Output: %d", hcf);
    return 0;
}
