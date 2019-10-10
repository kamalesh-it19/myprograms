#include<stdio.h>
int main() {
    int a[5],i,j,c;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
             c=a[i];
            a[i]=a[j];
            a[j]=c;
            }
    }   }   
        
     printf("\narray is sorted in descending order:\n");
   for(i=0;i<5; i++)
   {
       printf("%d ", a[i]);
   
       printf("\n\n");
}
}
       
    
