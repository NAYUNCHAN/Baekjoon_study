#include<stdio.h>
#include<string.h>

int main(void){
    char str[1000001];
    int len,count=0;

    scanf("%[^\n]s",str);
    len=strlen(str);

    for(int i=0;i<len-1;i++){
        if(str[i]==' '){
            count++;
        }
    }
    count+=1;

    if(str[0]==' '){
        count--;
    }

    printf("%d",count);
    return 0;
}