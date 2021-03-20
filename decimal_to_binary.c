#include<stdio.h>
void main()
{
	int a[10],i,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n/=2;
	}
	printf("the binary format:");
	for(i=i-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
