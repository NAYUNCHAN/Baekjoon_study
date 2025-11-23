#include<stdio.h>

int main(void){
    int n0=0,n1,n2,n3,n4;

    for(int N=1;;N++)
        {
            scanf("%d",&n0);
            if (n0==0)
                break;
            n1=n0*3;
            if (n1%2==0)
            {
                n2=n1/2;
                n3=n2*3;
                n4=n3/9;
                printf("%d. even %d\n",N,n4);
            }
            else
            {
                n2=(n1+1)/2;
                n3=n2*3;
                n4=n3/9;
                printf("%d. odd %d \n",N,n4);
            }
            
        }
    return 0;
}