#include <stdio.h>

int main()
{
  float x,y,addition,subtraction,multiplication,division;
  printf("Enter the first number : ");
  scanf("%f",&x);
  printf("Enter the second number : ");
  scanf("%f",&y);
  addition=x+y;
  subtraction=x-y;
  multiplication=x*y;
  division=x/y;
  printf("The addition of two numbers is %f  ",addition);
  printf("\nThe subtraction of two numbers is %f  ",subtraction);
  printf("\nThe multiplication of two numbers is %f  ",multiplication);
  printf("\nThe division of two numbers is %f  ",division);
 
  return 0;
}