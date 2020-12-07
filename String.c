#include<stdio.h>
int main()
{
    char name1[10],name2[10];
    printf("Please input your name1");
    scanf("%s",name1);
    printf("Please input your name2");
     scanf("%s",name2);
    if(name1==name2) // it doesnt work like this
    printf("both are same");
    else
            printf("both are not same");

}
