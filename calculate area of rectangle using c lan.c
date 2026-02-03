/*program for calculate area of rectangle*/
#include<stdio.h>
int main()
{
    float l, b, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f%f", &l, &b);
    area = l * b;
    printf("Area of rectangle = %f", area);
    return 0;
}