#include<stdio.h>

int main(void)
{
    int a=0,b=0;

    scanf("%d\n%d",&a,&b);

    int line3=a*(b%10);
    int line4=a*((b%100)/10);
    int line5=a*(b/100);
    printf("%d\n",line3);
    printf("%d\n",line4);
    printf("%d\n",line5);
    printf("%d\n",a*b);

    return 0;
}