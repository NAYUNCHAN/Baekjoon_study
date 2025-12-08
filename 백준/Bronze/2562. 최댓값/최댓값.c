#include <stdio.h>

int main(void)
{
    int Max,m=1;
    int num[10];

    for(int i=0;i<9;i++) scanf("%d\n",&num[i]);

    Max=num[0];

    for(int i=1;i<10;i++)
        {
            if(Max<num[i])
            {
                Max=num[i];
                m=i+1;
            }
        }

    printf("%d\n%d",Max,m);

    return 0;
}