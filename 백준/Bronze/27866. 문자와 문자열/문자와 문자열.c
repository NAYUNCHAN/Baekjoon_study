#include <stdio.h>

int main() 
{
    int i=0;
    char str[1001];
    scanf("%s",str);
    scanf("%d",&i);

    printf("%c",str[i-1]);
    
    return 0;
}