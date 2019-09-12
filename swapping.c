#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("enter the 2 so.n");
   scanf("%d%d",&a,&b);
  temp=a;
   a=b;
   b=temp;
  printf("a=%d\n b=%d",a,b);
 return 0;
}
