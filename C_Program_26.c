#include <stdio.h>
int main()
{
    int i, result;
    result = 0;
    for (i = 9999; i >= 1000; i--)
    {
        if (i % 7 == 0 && i % 9 == 0)
        {
            result = i;
            break;
        }
    }
    printf("Output: %d", result);
    return 0;
}
26
