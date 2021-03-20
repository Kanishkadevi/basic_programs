#include<stdio.h>
void main()
{
	int n1,n2,max;
	printf("enter the first number:");
	scanf("%d",&n1);
	printf("enter the second number:");
	scanf("%d",&n2);
	max=n1>n2?n1:n2;
	while(1)
	{
		if(max%n1==0&&max%n2==0)
		{
			printf("LCM is %d",max);
			break;
		}
		max+=1;
	}
}
