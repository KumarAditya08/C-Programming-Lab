#include <stdio.h>
int main()
{
    float x,r,l,b,s;
    printf("Enter the number for choice based area and perimeter");
    scanf("%f",&x);
    if(x==1) { printf("Enter the side of the square : ");
               scanf("%f",&s);
               printf("The area and perimeter of the square are %f and %f",s*s,4*s);
    }
    else if(x==2) { printf("Enter the length and breadth of the rectangle : ");
               scanf("%f%f",&l,&b);
               printf("The area and perimeter of the rectangle are %f and %f",l*b,2*(l+b));
    }
    else if(x==3) { printf("Enter the radius of the circle : ");
               scanf("%f",&r);
               printf("The area and perimeter of the circle are %f and %f",3.14*r*r,2*3.14*r);
    }
    else printf("Invalid");
    return 0;              
}