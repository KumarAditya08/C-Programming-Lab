#include <stdio.h>
int main()
{
    int x,r,l,b,s;
    printf("Enter the value for choice based area and perimeter : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter the side of the square : ");
        scanf("%d",&s);
        printf("The area and perimeter of the square are %d and %d",s*s,4*s);
        break;
        case 2:
        printf("Enter the length and breadth of the rectangle : ");
        scanf("%d%d",&l,&b);
        printf("The area and perimeter of the rectangle are %d and %d",l*b,2*(l+b));
        break;
        case 3:
        printf("Enter the radius of the circle : ");
        scanf("%d",&r);
        printf("The area and perimeter of the circle are %f and %f",3.14*r*r,2*3.14*r);
        break;
        default :
        printf("Invalid");
        break;
    }
    
    
    return 0;              
    

}