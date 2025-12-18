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

int main()
{

  printf("\n\n\n\n\n\n\n");
  printf("********* Main Function ************");
  printf("\n\n\n\n\n\n\n");


  LeapYear();


    return 0;
}