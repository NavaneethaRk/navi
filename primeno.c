#include <stdio.h>
int main()
{  
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i!=0)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag=1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}
