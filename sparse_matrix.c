#include<stdio.h>
int main()
{
    int a[10][10],row,column,count=0,i,j;
    printf("row:");
    scanf("%d",&row);
    printf("column:");
    scanf("%d",&column);
    printf("enter array elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
               {
                   count++;

               }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    if(count>((row*column)/2))
    {
        printf("It is a sparse matrix");
    }
    else
    {
        printf("It is not a sparse matrix");
    }
}
