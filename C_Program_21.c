#include <stdio.h>

int main()
{
    int n, digit, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    count = 0;

    for (; n > 0; n = n / 10)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            count = count + 1;
        }
    }

    printf("Output: %d", count);

    return 0;
}
