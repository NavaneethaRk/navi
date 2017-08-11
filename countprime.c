#include <stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(i%n!=0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
