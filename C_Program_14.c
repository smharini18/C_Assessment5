#include <stdio.h>
int main()
{
    int n, temp, first, last, middle, div = 1, result;
    printf("enter a number");
    scanf("%d", &n);
    last = n % 10;
    for(temp = n; temp >= 10; temp = temp / 10)
    {
        div = div * 10;
    }
    first = n / div;
    middle = (n % div) / 10;
    result = (last * div) + (middle * 10) + first;
    printf("%d", result);
    return 0;
}
