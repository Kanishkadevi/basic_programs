#include<stdio.h>
void main()
{
	int n,r,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=sum;
	while(n>0)
	{
	r=n%10;
	switch(r)
	{
		case 1:if(r==1)
		       {
		       printf("one\t");
			   }
		case 2:if(r==2)
		       {
		       	printf("two\t");
			   }
		case 3:if(r==3)
		       {
		       	printf("three\t");
				}
		case 4:if(r==4)
		       {
		       	printf("four\t");
				}
		case 5:if(r==5)
		       {
				 printf("five\t");
				}
		case 6:if(r==6)
		       {
				printf("six\t");
				}
		case 7:if(r==7)
		       {
				 printf("seven\t");
				}
		case 8:if(r==8)
		       {
		       	printf("eight\t");
				}
		case 9:if(r==9)
		       {
				printf("nine\t");
				}
		case 10:if(r==0)
		        {
		        	printf("zero\t");
				}
    }
	n=n/10;
}
}
