// program o swap 2 numbers using third variable
#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Enter 2 number:-");
    scanf("%d%d",&x,&y);
    printf("Before swapping x=%d and y=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping x=%d and y=%d\n",x,y);
    return 0;
}