
#include <stdio.h>

int main()
{
   int leap;
   printf("Enter the year..:");
   scanf("%d",&leap);
   if(leap%400==0&&leap%4==0)
{
   printf("%d is leap year",leap);
   }
   else
   {
       printf("%d is not leap year",leap);
   }
   }

