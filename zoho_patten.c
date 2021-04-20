#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int row,column,i,len,space;
  printf("enter the string:\t");
  gets(str);
  len=strlen(str);
  for(row=0;row<len;row++)
  {
     for(column=0;column<len;column++)
     {
         if((row==column)||((row+column)==(len-1)))
         {
             printf("%c",str[column]);
         }
         else
         {
             printf(" ");
         }
     }
     printf("\n");
  }
}
