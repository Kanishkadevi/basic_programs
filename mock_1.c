#include<stdio.h>
int main(void)
{
	int n,rows,i,j=1,a=0,b=1,c;
	printf("enter the no. of rows:");
	scanf("%d",&n);
	for(rows=1;rows<=n;rows++)
	{
		a=0;
		b=1;
		printf("%d",b);
		for(i=1;i<rows;i++)
		{
		  c=a+b;
		  printf("%d",c);
		  a=b;
		  b=c;	
			
		}
		printf("\n");
		
	}
}
