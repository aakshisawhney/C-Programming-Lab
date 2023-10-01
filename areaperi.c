#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter the value of length of rectangle:");
    scanf("%d",&l);
    printf("Enter the value of breadth of rectangle:");
    scanf("%d",&b);
    int side;
    printf("\n Enter the value of side of square:");
    scanf("%d",&side);
    float radius;
    printf("\n Enter the value of radius of circle:");
    scanf("%f",&radius);
    printf("\n perimeter of circle:%f",2*3.14*radius);
    printf("\n area of circle:%f",radius*radius*3.14);
    printf("\n perimeter of square:%d",4*side);
    printf("\n area of square:%d",side*side);
    printf("\n perimeter of rectangle:%d",2*(l+b));
    printf("\n area of rectangle:%d",l*b);
}