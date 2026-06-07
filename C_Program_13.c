#include <stdio.h>

int main()
{
    int i, rev = 0, digit;
    printf("enter a number:");

    scanf("%d", &i);

    for(; i > 0; i = i / 10)
    {
        digit = i % 10;
        rev = (rev * 10) + digit;
    }

    printf("%d", rev);

    return 0;
}
