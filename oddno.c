
#include <stdio.h>
int main()
{
    int i,n,g;
    scanf("%d %d",&n,&g);
    for(i=n;i<=g;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
