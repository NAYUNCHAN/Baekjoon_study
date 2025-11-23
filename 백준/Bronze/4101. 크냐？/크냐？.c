#include<stdio.h>

int main(void){

    while(1){
        int a=0,b=0;
        scanf("%d %d",&a,&b);

        if(a>b){
            printf("Yes\n");
        }
        else if(a<b){
            printf("No\n");
        }
        else if(a==0 && b==0)
            break;
            
        else 
            printf("No\n");
        
    }
}