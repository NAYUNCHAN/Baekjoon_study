#include <stdio.h>

int main() {
    int n=0,v=0,ans;
    scanf("%d",&n);
    int arr[n+1];

    for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

    scanf("%d",&v);

    for(int j=0;j<n;j++)
        {
            if(arr[j]==v)
                ans++;
        }

    printf("%d",ans);
}