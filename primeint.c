#include <stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    for(i=2;i<=N;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            k++;
        }
        if(k==2)
        printf("%d ",i);
    }
    return 0;
}
