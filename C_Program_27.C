#include <stdio.h>
int main()
{
    int i, n, digit, sum, count;
    count = 0;
    for (i = 1; i < 100000; i++)
    {
        n = i;
        sum = 0;

        for (; n > 0; n = n / 10)
        {
            digit = n % 10;
            sum = sum + digit;
        }
        if (sum == 14)
        {
            count = count + 1;
        }
    }
    printf("Output: %d", count);

    return 0;
}
