#include<stdio.h>

int main(void)
{
    int n=0,m,M;
    scanf("%d\n",&n);
    int arr[n+1];
    
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    m=arr[0];
    M=arr[0];

    for(int i=0;i<n;i++)
        {
            if(m>arr[i]) m=arr[i];
            else if(M<arr[i]) M=arr[i]; 
        }

    printf("%d %d",m,M);

    return 0;
}