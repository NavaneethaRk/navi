#include <stdio.h>
#include<string.h>
int main()
{
    char s[20],temp;
    int i,l;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i=i+2)
    {
        temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    printf("%s",s);
    return 0;
}
