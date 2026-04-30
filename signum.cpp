#include<stdio.h>

int main()
{

    int m,n,r;
    
    printf("enter a number :");
    scanf("%d",&m);

    if(m !=0)
    {
        if(m>0)
        {
            n=1;
        }
        else
        {
            n=-1;
        }

    }else
    {
        n =0;
    }

    printf("%d the value of m : \n",m);
    printf("%d the vaue of n : \n",n);


}
