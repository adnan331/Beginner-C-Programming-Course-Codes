#include<stdio.h>
int main()
{
    float c,f;
    printf("Please enter a temparature in Celsius: ");
    scanf("%f",&c);
    f = (9*c)/5+32;
    printf("The temparature in fahrenheit scale is: %f ",f);

    return 0;
}
