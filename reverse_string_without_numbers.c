#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],temp;
    int len=0,i;
    printf("enter string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    int front=0,end=len-1;
    while(front<end)
    {
        if(!((str[front]&&str[end]>='0')&&(str[front]&&str[end]<='9')))
        {
            temp=str[front];
            str[front]=str[end];
            str[end]=temp;
            front++;
            end--;
        }
        else
        {
            end--;
        }
    }
    printf("RESULT:\n");
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
