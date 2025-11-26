#include<stdio.h>

int main(void){
    int N=1;

    scanf("%d",&N);
/*
    if(N!=0 || N!=1){
        return 0;
    }
*/
    if(N==0){
        printf("YONSEI");
    }
    else if(N==1){
        printf("Leading the Way to the Future");
    }

    return 0;
}