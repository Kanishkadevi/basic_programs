#include<stdio.h>
int main()
{
	int N,i,count=0,a,result,temp;
	printf("enter the limit:");
	scanf("%d",&N);
	for(i=0;i<=N;i++)
	{
		count+=no_of_zeros(i);
    }
	printf("Result:%d",count);
	return 0;
}
int no_of_zeros(int i)
{   
    int a,count=0;
  	do
  	{   
  	    a=i%10;
  		if(a==0)
  		{
  			count++;
		  }
		i=i/10;
    }
	while(i>=10);
	return count;
}
