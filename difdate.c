#include <stdio.h>
int main()
{
    int d,m,y,d1,m1,y1,dif;
    scanf("%d %d %d",&y,&m,&d);
    scanf("%d %d %d",&y1,&m1,&d1);
    if(m>m1)
    {
        dif=m-m1;
        printf("%d",dif);
    }
    else
    {
        dif=m1-m;
        printf("%d",dif);
    }
    return 0;
}
