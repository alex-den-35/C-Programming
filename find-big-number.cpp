#include<stdio.h>

int main()
{

   int num1,num2,num3;

   printf("enter first number : ");
   scanf("%d",&num1);

   printf("enter second number : ");
   scanf("%d",&num2);


   printf("enter therd number : ");
   scanf("%d",&num3);


   printf("\n\n\n\n");


   if(num1 > num2)
   {
       if(num1> num3)
       {
         printf(" num1 (%d) is bigest number \n",num1);
       }
       else
       {
        printf(" num3 (%d) is bigest number \n",num3);

       }
   }
   else if(num2 > num3)
   {
       printf("num2 (%d) is the bigest number \n",num2);
   }
   else
   {
       printf("num3 (%d) is the biggest number \n",num3);
   }






}