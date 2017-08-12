#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(isalpha(c)!=0)
    {
        printf("alphabet");
    }
    else
    {
        printf("Not an alphabet");
    }
    return 0;
}
