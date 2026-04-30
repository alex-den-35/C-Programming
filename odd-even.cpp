#include<stdio.h>


int main()
{

  int num1,rem1;
  
  printf("please enter number:");
  scanf("%d",&num1);
  
  rem1 = num1 % 2;

  if(rem1 == 0)
  {
     printf("%d number is even /n",num1);
  }
  else{
     printf("%d number is odd ",num1);
  }
}