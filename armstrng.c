#include <stdio.h>
int main()
{
    int n,g,rem,result=0;
    scanf("%d",&n);
    g=n;
    while(g!=0)
    {
        rem=g%10; 
        g=g/10;
        result=result+(rem*rem*rem);
    }
    if(result==n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not an armstrong");
    }
    return 0;
}
