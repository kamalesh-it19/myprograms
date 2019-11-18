#include <stdio.h>
#include <string.h>
void main()
{
   int sum = 0, i, a;
   char string[100];
   printf("Enter the string : ");
   scanf("%s", string);
       a = strlen(string);
   for (i = 0; i < a; i++)
   {
       sum = sum + string[i];
   }
   printf("\nSum of all characters : %d ",sum);
}


