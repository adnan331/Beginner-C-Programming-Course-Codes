#include<stdio.h>
int main()
{
    double length,width,area;
    printf("Enter the length and the width of the rectangle with a space:\n");
    scanf("%lf %lf",&length,&width);
    area = length*width;
    printf("The area of rectangle is %.2lf",area);

     return 0;
}
