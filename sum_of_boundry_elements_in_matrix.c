#include<stdio.h>
int main()
{
    int a[30][30],b[30][30],row,column,i,j,sum=0,n;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&column);
    printf("enter array elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("boundary matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i==0||j==0||i==row-1||j==column-1)
            {
                b[i][j]=a[i][j];
                printf("%d",b[i][j]);
                sum=sum+b[i][j];
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("sum:%d",sum);
    return 0;
}
