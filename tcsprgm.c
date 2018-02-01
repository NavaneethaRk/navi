#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,len;
    for(i=0;i<20;i++)
    {
        scanf("%c",&a[i]);
    }
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]>=65&&a[i]<=91)
        {
            b[i]=a[i]+32;
        }
        if(a[i]>=97&&a[i]<=123)
        {
            b[i]=a[i]-32;
        }
    }
    for(i=0;i<len;i++)
    {
        printf("%c",b[i]);
    }
    
    return 0;
}
