#include <stdio.h>

int main()
{
    int i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &i);

    for(; i > 0; i = i / 10)
    {
        count = count + 1;
    }

    printf("Count = %d", count);

    return 0;
}
