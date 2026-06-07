#include <stdio.h>

int main()
{
    int n, num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n % 100;
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count = count + 1;
        }
    }
    if(count == 2)
    {
        printf("Prime");
}
    else
    {
        printf("Not Prime");
    }

    return 0;
}
