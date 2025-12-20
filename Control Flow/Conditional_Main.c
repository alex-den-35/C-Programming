#include <stdio.h>


int LeapYear()
{

    int year;

    printf("please enter year \n :");
    scanf("%d",&year);


    if((year % 400) == 0)
    {
      printf("%d is leap year \n", year);
    }
    else if((year % 100) == 0)
    {

        printf("%d is note leap year \n",year);

    }
    else if((year % 4) == 0)
    {
       printf("%d is leap year \n",year);
    }
    else 
    {
      printf("%d is not leap year \n",year);
    }
}

int Signum()
{
  int m,n;
  printf("enter value of m :");
  scanf("%d",&m);
  if(m!=0)
  {
    if(m>0)
    {
      n=1;
    }
    else{
      n=-1;
    }

  }else
  {
    n=0;
  }

  printf("the value of m = %d \n",m);
  printf("the value of n = %d \n",n);


  return 0;
}

int main()
{

  printf("\n\n\n\n\n\n\n");
  printf("********* Main Function ************");
  printf("\n\n\n\n\n\n\n");


     
    //  LeapYear();

    Signum();




    return 0;
}