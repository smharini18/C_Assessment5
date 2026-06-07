#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=11;i<=100;i=i+2)
    {
     sum=(i/10)+(i%10);
     if(sum==7)
     {
        printf("%d\n",i);
     }
    }
 
}
