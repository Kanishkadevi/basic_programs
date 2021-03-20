#include<stdio.h>
#include<string.h>
void reverseSentence();
int main()
{
	char c[100];
	printf("enter the string:");
	gets(c);
	reverseSentence(c);
	return 0;
}
void reverseSentence(char *ch )
{
	int len,i;
	len=strlen(ch);
	for(i=len;i>=len)
	{
		printf("%s",ch[i]);
	}
}
