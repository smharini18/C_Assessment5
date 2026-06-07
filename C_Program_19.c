#include <stdio.h>
int main()
{
    int n, h, t, mid, i, flag;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n)
    h = (n / 100) % 10;
    t = (n / 10) % 10;
    mid = (h * 10) + t;
    flag = 0;
    for (i = 2; i < mid; i++)
    {
        if (mid % i == 0)
        {
            flag = 1;
        }
    }
    for (i = 1; i <= 1; i++)
    {
        if (mid <= 1)
        {
            flag = 1;
        }
        if (flag == 0)
        {
            printf("Output - Prime");
        }
        else
        {
            printf("Output - Not Prime");
        }
    }

    return 0;
}
