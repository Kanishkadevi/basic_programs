#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len,count=0,i,t,h,e,space;
	printf("enter the string:");
	gets(str);
	len=strlen(str);
	for(i=0;i<=len-3;i++)
	{
		t=(str[i]=='t'||str[i]=='T');
		h=(str[i+1]=='h'||str[i]=='H');
		e=(str[i+2]=='e'||str[i]=='E');
		space=(str[i+3]==' '||str[i+3]=='\0');
		if((t&&h&&e&&space)==1)
		{
			count++;
		}
	}
	printf("the frequency of the word 'the' is %d",count);
	return 0;
}
