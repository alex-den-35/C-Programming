#include <stdio.h>


int main()
{
   int num1,num2,num3,option;
   float fnum1,fnum2,fnum3;
   double dnum1,dnum2,dnum3;
   double sum;
   


   printf("plase enter the number acording to your choice \n");
   printf("for int 1 \n for float 2 \n for double 3 \n");
   printf("Enter Number :");
   scanf("%d",&option);

   switch(option)
   {

    case 1:
       printf("plase enter the first number :");
       scanf("%d",&num1);
       printf("plase enter the second number :");
       scanf("%d",&num2);
       printf("plase enter the third number :");
       scanf("%d",&num3);

       sum = num1+num2+num3;
       printf("result : %lf",sum);
    break;

    case 2:

       printf("plase enter the first number :");
       scanf("%f",&fnum1);
       printf("plase enter the second number :");
       scanf("%f",&fnum2);
       printf("plase enter the third number :");
       scanf("%f",&fnum3);

       sum = fnum1+fnum2+fnum3;
       printf("result : %lf ",sum);
         
    break;

    case 3:


      printf("plase enter the first number :");
       scanf("%lf",&dnum1);
       printf("plase enter the second number :");
       scanf("%lf",&dnum2);
       printf("plase enter the third number :");
       scanf("%lf",&dnum3);

       sum = dnum1+dnum2+dnum3;

      printf("result : %lf",sum);

    break;

    default:
    printf("pleas select valid option");
    break;

   }


    return 0;
}