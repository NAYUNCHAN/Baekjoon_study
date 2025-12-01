#include <stdio.h>

int main() {
    int n=0,x=0;

    scanf("%d %d\n",&n,&x);
    int arr[n+1];

    for(int i=0;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
    for(int i=0;i<=n;i++)
        {
            if(x>arr[i])
            {
                printf("%d ",arr[i]);
            }
            else if(x<=arr[i])
            {
                continue;
            }
        }

    return 0;
}