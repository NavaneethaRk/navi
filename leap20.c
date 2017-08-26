#include <stdio.h>
int main()
{
    int year,i;
    scanf("%d",&year);
    if(year%4==0)
    {  
        for(i=1;i<=20;i++)
        {
            year=year+4;
            printf("%d ",year);
        }
    }
    return 0;
}
