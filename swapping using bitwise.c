//WAP for swapping of numbers using bitwise operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=a^b;//0101 ^0010=0010=2
    b=a^b;//0010^0111=0101
    a=a^b;//0010^0101=0111
    printf("Swapped values of\na=%d\nb=%d",a,b);
    return 0;
}