#include<stdio.h>
#include<math.h>
int fibonacci(int num)
{
    int n=sqrt(num);
    return(n*n==num);
}
int main()
{
    int arr[20],i,n;
    int count=0;
    printf("enter no.of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("fibonacci numbers in array:\n");
    for(i=0;i<n;i++)
    {
        if(fibonacci(5*arr[i]*arr[i]+4)||fibonacci(5*arr[i]*arr[i]-4))
        {
            printf("%d\n",arr[i]);
            count++;
        }
    }
    if(count==0)
    {
        printf("NONE FIBONACCI NUMBERS\n");
    }
    return 0;

}
