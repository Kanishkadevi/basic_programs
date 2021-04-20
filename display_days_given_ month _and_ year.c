#include<stdio.h>
int main()
{
    int month,year,days;
    printf("enter month as a number:");
    scanf("%d",&month);
    printf("enter year:");
    scanf("%d",&year);
    if(month%2==1)
    {
        printf("days:31");
    }
    else if(month==2)
    {
     if(year%4==0)
     {
         printf("days:29");
     }
     else
     {
         printf("days:28");
     }
    }
    else
    {
        printf("days:30");
    }
    return 0;
}
