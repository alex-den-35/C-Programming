#include<stdio.h>


int main()
{

    float height;

    printf("enter height :");
    scanf("%f",&height);

    //150.0 , 165.0  , 195.0


    if(height <= 150.0)
    {
       printf("person is Dwarf \n");
    }
    else if((height>=150.0) && (height <=165.0))
    {
        printf("person is avreg height \n");
    }
    else if((height>=165.0) && (height <=195.0))
    {
         printf("person is tall \n");
    }
    else 
    {
        printf("abnormal height \n");
    }

}