#include <stdio.h>
int main(void) {
    int n,a[10],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>=1;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
