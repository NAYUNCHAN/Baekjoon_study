#include <stdio.h>
#include<math.h>

int main() {
    int n1=0,n2=0,n3=0,n4=0,n5=0,ans;

    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    
    ans=(n1*n1+n2*n2+n3*n3+n4*n4+n5*n5)%10;

    printf("%d",ans);

    return 0;
}