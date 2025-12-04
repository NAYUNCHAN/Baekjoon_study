#include <stdio.h>

int main() 
{
    char str[101];

    scanf("%s",str);
    int i=0;

    while(str[i] != '\0')
        {
            if(65<=str[i] && str[i]<=90)//대문자 일때
            {
                str[i]+=32;
            }
            else if(97<=str[i] && str[i]<=122) //소문자 일때
            {
                str[i]-=32;
            }
            i++;
        }
    printf("%s",str);

    return 0;
}