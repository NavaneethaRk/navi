#include <stdio.h>
void cir();
void rec();
void tria();
int a,l,b,h,area;
int main()
{
    scanf("%d %d %d %d",&a,&l,&b,&h);
    cir();
    rec();
    tria();
    return 0;
}
void cir()
{
    area=3.14*a*a;
    printf("%d ",area);
}
void rec()
{
    area=l*b;
    printf("%d ",area);
}
void tria()
{
    area=0.5*b*h;
    printf("%d ",area);
}
