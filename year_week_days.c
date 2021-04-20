#include<stdio.h>
int main()
{
    int number,years=0,weeks=0,days=0;
    printf("enter the number:\t");
    scanf("%d",&number);
    if(number<365)
    {
      weeks=number/7;
      days=number%7;
      printf("years=%d\t weeks=%d\t days=%d",years,weeks,days);
    }
    else
    {
        years=number/365;
        number=number-(years*365);
        weeks=number/7;
        days=number%7;
        printf("years=%d\t weeks=%d \t days=%d",years,weeks,days);
    }
}
