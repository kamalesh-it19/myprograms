#include <stdio.h>
int main()
{
    int i, k = 1, n, m, j;
    printf("Enter number of rows: ");
    scanf("%d",&i);
    for(m=0; m<i; m++)
    {
        for(n=1; n <= i-m; n++)
            printf("  ");
        for(j=0; j <= m; j++)
        {
            if (j==0 || m==0)
                k = 1;
            else
                k = k*(m-j+1)/j;
            printf("%4d", k);
        }
        printf("\n");
    }
    return 0;
}

