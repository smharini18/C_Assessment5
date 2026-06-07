#include <stdio.h>

int main()
{
    int n, temp, sum = 0;
    int i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count = count + 1;
        }
    }
    for(temp = n; temp > 0; temp = temp / 10)
    {
        sum = sum + (temp % 10);
    }
    if(count == 2)
    {
        if(sum == 14)
        {
            printf("Prime & Sum of Digits is 14");
        }
        else
        {
            printf("Prime & Sum of Digits is not 14");
        }
    }
    else
    {
        if(sum == 14)
        {
            printf("Not Prime but Sum of Digits is 14");
        }
        else
        {
            printf("Not Prime & Sum of Digits is not 14");
        }
    }

    return 0;
}
