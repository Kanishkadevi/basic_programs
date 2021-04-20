#include<stdio.h>
int main()
{
    int a[25],i,odd[25],even[25],count=0,count1=0,j,n,m,temp;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            odd[count]=a[i];
            ++count;
        }
        else
        {
            even[count1]=a[i];
            count1++;
        }
    }
    for(i=0;i<=count1;i++)
    {
        if(even[i]>even[i+1])
        {
            temp=even[n];
            even[n]=even[n-1];
            even[n-1]=temp;
        }

    }
    for(i=0;i)
    for(j=0;j<count;j++)
    {
        if(odd[j]<odd[j+1])
        {

        temp=odd[m-1];
        odd[m-1]=odd[m];
        odd[m]=temp;
        }
    }

    printf("output:\n");
    for(i=0,j=0;i<=count,j<=count1;i++,j++)
    {
        printf("%d\n",odd[i]);
        printf("%d\n",even[j]);
    }

    }
