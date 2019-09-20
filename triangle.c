#include<stdio.h>
int main()
{
   int t1,t2,t3,t4;
   printf("Enter the 3 angles of triangle..:");
   scanf("%d%d%d",&t1,&t2,&t3);
   t4=t1+t2+t3;
   if(t4==180)
{
   printf("It is valid of triangle");
   }
   else
   {
       printf("it is not valid of triangle");
   }
   return 0;
}

