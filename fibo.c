include <stdio.h>
int main()
{
    int n,f=0,s=1,g,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",f); 
        g=f+s;
        f=s;
        s=g;
    }
    return 0;
}
