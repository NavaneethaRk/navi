#include <stdio.h>
int main()
{
    int n,g,pwr=1;
    scanf("%d %d",&n,&g);
    while(g!=0)
    {
        pwr=pwr*n;
        g--;
    }
    printf("%d",pwr);
    return 0;
}
