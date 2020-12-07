#include<stdio.h>
int main(){


    int n,i;
    printf("Please enter an integer number: ");
    scanf("%d",&n);
    printf("Number table of %d\n",n);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }

}
