#include<stdio.h>

int main(void)
{
    int n=0,ans=0;
    scanf("%d",&n);
    char num[n+1];
    scanf("%s",num);

    for(int i=0;i<n;i++) ans+=num[i]-'0'; //아스키코드

    printf("%d",ans);

    return 0;
}