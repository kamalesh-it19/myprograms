#include <stdio.h>
void main() {
    int a,b,c,ch;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    printf("1.add\n 2.sub\n 3.multiply\n4.div\n");
    printf("enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
         c=a+b;
        printf("%d",c);
        break;
        case 2:
          c=a-b;
        printf("%d",c);break;
        case 3:
         c=a*b;
        printf("%d",c);break;
        case 4:
         c=a/b;
        printf("%d",c);break;
    }
}

