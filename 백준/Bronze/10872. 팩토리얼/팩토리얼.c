#include <stdio.h>

int main() 
{
    int n=0,ans=1;

    scanf("%d",&n);

    if(n==0)
    {
        printf("%d",ans);
        return 0;
    }
    
    
    for(int i=1;i<=n;i++)
        {
            ans=i*ans;
        }
    
    printf("%d",ans);
    
    return 0;
}