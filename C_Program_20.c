#include <stdio.h>
int main()
{
    int i, j, count, flag;
    count = 0;
    for (i = 0; i <= 9; i++)
    {
        flag = 0;
        if (i <= 1)
        {
            flag = 1;
        }
        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag = 1;
                }
            }
        }
        if (flag == 0)
        {
            count = count + 1;
        }
    }
    printf("Total number of single digit prime numbers = %d", count);

    return 0;
}
