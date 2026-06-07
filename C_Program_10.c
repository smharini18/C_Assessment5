#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=9;i<=99;i=i+2)
    {
    
     if(i/10==7)
     {
       sum=sum+i;
     }
    }
 printf("%d\n",sum);
}
