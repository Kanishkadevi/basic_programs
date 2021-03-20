#include<stdio.h>
void main()
{
	int row,space,n,i,j,left=1,right=0;
	printf("enter no. of rows:");
	scanf("%d",&n);
	left=1;
	right=0;
	for(row=1;row<=n;row++)
	{
		for(space=1;space<=(n-row);space++)
		{
			printf(" ");
		}
		for(i=1;i<=left;i++)
		{
			printf("%d",i);
		}
		left++;
		if(row!=1)
		{
			for(j=right;j>=1;j--)
			{
				printf("%d",j);
			}
		}
		right++;
		printf("\n");
	}
}
