#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i;
	printf("enter the sentence:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else
		{
			str[i]=str[i]-32;
		}
	}
	printf("the final string is %s:",str);
}
