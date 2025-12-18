#include <stdio.h>

int main()
{



    int a,b,c;



    printf("plase enter number \n :");
    scanf("%d",&a);

    c = a % 2;

    if(c == 0)
    {
        printf("its even number \n");

    }else{
        printf("it odd number \n");
    }


    return 0;
}