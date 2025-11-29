#include <stdio.h>

int main() 
{
    int H=0,M=0;

    scanf("%d %d",&H,&M);

    if(H==0)
    {
        if(M>=45)
        {
            printf("%d %d",H,M-45);
        }
        else if(M<45)
        {
            H=23;
            M=M+60-45;
            printf("%d %d",H,M);
        }
    }
    else if(H>0)
    {
        if(M>=45)
        {
            printf("%d %d",H,M-45);
        }
        else if(M<45)
        {
            H=H-1;
            if(M+60-45==60)
            {
                M=0;
                printf("%d %d",H,M);
            }
            else
            {
                printf("%d %d",H,M+60-45);
            }
        }
    }
    return 0;
}