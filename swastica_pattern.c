#include<stdio.h>
int main()
{
    int row,column,a[20],i,j;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==row/2||j==row/2||(i==0&&j<=row/2)||(j==0&&i>=row/2)||(j==row-1&&i<=row/2)||(i==row-1&&j>=row/2))
               {
                   printf("*");
               }
               else
               {
                   printf(" ");
               }
        }
        printf("\n");
    }
}
