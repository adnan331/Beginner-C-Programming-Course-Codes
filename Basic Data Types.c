#include<stdio.h>
int main()
{
    int integerVar;
    float  floatingVar;
     char charVar ;
     scanf("%d",&integerVar);
     scanf("%f",&floatingVar);
     scanf("%c",&charVar);

     printf("%d\n",integerVar);
     printf("%.1f\n",floatingVar);
     printf("%c",charVar);
     return 0;
}
