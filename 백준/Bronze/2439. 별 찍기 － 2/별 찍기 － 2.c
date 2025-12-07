#include<stdio.h>

int main(void)
{
    int n=0;
    scanf("%d",&n);

    if(n<=0 || n>100)
        return 0;

    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
                {
                    printf(" ");
                }
            for(int a=1;a<=i;a++)
                {
                    printf("*");
                }
            printf("\n");
        }

    return 0;
}