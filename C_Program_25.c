#include <stdio.h>

int main()
{
    int n, digit1, digit2, pair, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    count = 0;

    digit1 = n % 10;

    for (n = n / 10; n > 0; n = n / 10)
    {
        digit2 = n % 10;

        pair = (digit2 * 10) + digit1;

        if (pair == 16 || pair == 25 || pair == 36 || pair == 49 || pair == 64 || pair == 81)
        {
            count = count + 1;
        }

        digit1 = digit2;
    }

    printf("Output: %d", count);

    return 0;
}
