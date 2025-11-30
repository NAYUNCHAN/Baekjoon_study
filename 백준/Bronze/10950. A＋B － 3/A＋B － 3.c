#include <stdio.h>

int main() 
{
    int a=0,b=0,n=0;
    scanf("%d\n",&n);

    for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
        }
    return 0;
    
}