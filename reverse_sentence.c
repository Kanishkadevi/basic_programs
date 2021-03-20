#include<stdio.h>
#include<string.h>
int main()
{
	char c[100],reversed_str[100];
        int i,j,len;
	printf("enter the string:");
	gets(c);
        len=strlen(c);
        j=0;
        for(i=len-1;i>=0;i--)
        {
           reversed_str[j]=c[i];
           j++;
         }
         reversed_str[j]='/0';
         printf("the final string is:%s",reversed_str);
         return 0;
}
	
