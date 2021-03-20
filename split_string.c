#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],splitString[10][10];
	int i,j=0,count=0;
	printf("enter the string:");
	gets(str);
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]==' '&&str[i]=='\0')
		{
			splitString[count][j]='\0';
			count++;
			j=0;
		}
		else
		{
			splitString[count][j]=str[i];
			j++;
		}
	}
	printf("the final string is:\n");
	for(i=0;i<count;i++)
	{
		printf("%s\n",splitString[i]);
	}
	
}
