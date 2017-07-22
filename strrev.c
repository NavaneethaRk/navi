#include<stdio.h>
#include<string.h>
int main()
{
char s[],temp;
int i,j=0;
gets(s);
i=0;
j=strlen(s)-1;
while(i<j)
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
i++;
j--;
}
printf("revrsed string is %s",s);
return 0;
}

