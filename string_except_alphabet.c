#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,j;
	printf("enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	 while(!(str[i]>='a'&&str[i]<='z')&&(str[i]>='A'&&str[i]<='Z'))
	 {
	 	for(j=i;str[j]!='\0';j++)
	 	{
	 		str[j]=str[j+1];
		 }
		 str[j]='\0';
	 }
	}
	printf("Final array:%s",str);
}
