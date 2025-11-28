#include <stdio.h>

double sums(double snum1,double snum2,double snum3);
double subtraction(double snum1,double snum2,double snum3);
double multiplication(double snum1,double snum2,double snum3);
double division(double snum1,double snum2,double snum3);
int remainder_division(int snum1,int snum2,int snum3);


int main()
{
   int num1,num2,num3,option;
   float fnum1,fnum2,fnum3;
   double dnum1,dnum2,dnum3;
   double sum = 0;

   double snum1,snum2,snum3;
   int process;  
   


   printf("plase enter the number acording to your choice \n");
   printf("for int 1 \n for float 2 \n for double 3 \n");
   printf("Enter Number :");
   scanf("%d",&option);

   printf("plase select what process do you wnat with this number");
   printf(" for sum enter => 1 \n  for subtraction enter => 2 \n  for multiplication enter => 3 \n  for division enter => 4 \n for remainder after division enter => 5 \n plae enter your process :");
   scanf("%d",&process);


   switch(option)
   {

    case 1:
       printf("plase enter the first number :");
       scanf("%d",&num1);
       printf("plase enter the second number :");
       scanf("%d",&num2);
       printf("plase enter the third number :");
       scanf("%d",&num3);

       if(process == 1)
       { 
         sum = sums(num1,num2,num3);
         
       }

        if(process == 2)
       { 
         sum = subtraction(num1,num2,num3);
         
       }

        if(process == 3)
       { 
         sum = multiplication(num1,num2,num3);
         
       }

        if(process == 4)
       { 
         sum = division(num1,num2,num3);
         
       }

        if(process == 5)
       { 
         sum = remainder_division(num1,num2,num3);
         
       }
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

double sums(double snum1,double snum2,double snum3)
{

    return snum1+snum2+snum3;
}

double subtraction(double snum1,double snum2,double snum3)
{
    return  snum1-snum2-snum3;
}

double multiplication(double snum1,double snum2,double snum3)
{
    return snum1*snum2*snum3;
}


double division(double snum1,double snum2,double snum3)
{

    return snum1/snum2/snum3;
}


int remainder_division(int snum1,int snum2,int snum3)
{
 
    return snum1%snum2%snum3;
}