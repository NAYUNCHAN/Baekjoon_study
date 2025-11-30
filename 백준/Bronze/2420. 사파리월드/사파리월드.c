#include <stdio.h>

int main() 
{
    long long int a=0,b=0,ans;
    scanf("%lld %lld",&a,&b);

    if(a+b>=0)
    {
        if(a>=b)
        {
            ans=a-b;
            printf("%lld",ans);
        }
        else if(b>a)
        {
            ans=b-a;
            printf("%lld",ans);
        }
        
    }
    else if(a+b<0)
    {
        if(a>=b)
        {
            ans=-(-a+b);
            printf("%lld",ans);
        }
        else if(a<b)
        {
            ans=-(-b+a);
            printf("%lld",ans);
        }
    }
    
    return 0;
}