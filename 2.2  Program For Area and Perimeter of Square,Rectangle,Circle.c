#include <stdio.h>
int main()
{
  int l,b;
  printf("Enter the length of the rectangle : ");
  scanf("%d",&l);
  printf("Enter the breadth of the rectangle : ");
  scanf("%d",&b);
  
  int side;
  printf("Enter the side of the square : ");
  scanf("%d",&side);

  float r;
  printf("Enter the radius of the circle : ");
  scanf("%f",&r);
  printf("\nPerimeter of circle is : %f",2*3.14*r);
  printf("\nArea of circle is : %f",3.14*r*r);
  printf("\nPerimeter of square is : %d",4*side);
  printf("\nArea of square is : %d",side*side);
  printf("\nPerimeter of rectangle is : %d",2*(l+b));
  printf("\nArea of rectangle is : %d",l*b);

  return 0;
}