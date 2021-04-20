#include<stdio.h>
int main()
{
    int a[30][30],b[30][30],row,column,i,j,sum1=0,sum2=0,sum3=0,sum=0,k;
    printf("enter row:");
    scanf("%d",&row);
    printf("enter column:");
    scanf("%d",&column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i==0;i++)
    {
        for(j=0;j<column-1;j++)
        {
            sum1=sum1+a[i][j];
        }
    }
    i=0;
    j=column-1;
    while(i<row-1&&j>0)
    {
        sum2=sum2+a[i][j];
        i++;
        j--;
    }
    for(i=row-1;i==row-1;i++)
    {
        for(j=0;j<column;j++)
        {
            sum3=sum3+a[i][j];
        }
    }
    sum=sum1+sum2+sum3;
    printf("sum:%d",sum);

    return 0;
}
