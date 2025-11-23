#include<stdio.h>

int main(void){
    int num=0,sum=0;
    for (int i=1;i<=5;i++){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}