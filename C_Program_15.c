#include <stdio.h>

int main()
{
    int n, temp, div = 1, first, rest, result;
    printf("enter the number:");
    scanf("%d", &n);
    for(temp = n; temp >= 10; temp = temp / 10)
    {
        div = div * 10;
    }

    first = n / div;
    rest = n % div;

    if(first % 2 != 0)
    {
        first = first - 1;
    }

    result = (first * div) + rest;

    printf("%d", result);

    return 0;
}
