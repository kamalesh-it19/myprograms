
#include<stdio.h>

int main()
   {
    int m1,m2,m3,m4,m5,total;
    printf("enter the 5 subject marks");
   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
  if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
{
  printf("theb pass total mark is %d",total);
}
 else
{
 printf("fail the total mark is %d",total);
}
return 0;
}
