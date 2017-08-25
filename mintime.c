#include <stdio.h>
int main()
{
    int t1,t2,m;
    scanf("%d %d",&t1,&t2);
    if(t1<t2)
    {
        m=(t2-t1)*60;
        printf("%d",m);
    }
    else
    {
        m=(t1-t2)*60;
        printf("%d",m);
    }
    return 0;
}
