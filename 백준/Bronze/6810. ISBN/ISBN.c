#include <stdio.h>

int sum(int n1,int n2,int n3){
    return 9*1+7*3+8*1+0*3+9*1+2*3+1*1+4*3+1*1+8*3+n1*1+n2*3+n3*1;
}

int main() {
    int n1=0,n2=0,n3=0;
    scanf("%d %d %d",&n1,&n2,&n3);

    printf("The 1-3-sum is %d",sum(n1,n2,n3));

    return 0;
    
}