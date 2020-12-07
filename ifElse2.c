#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>100)
        printf("%d is Big\n",n);
    else if(n>50)
        printf("%d is medium\n",n);
    else if(n>10)
        printf("%d is small\n",n);
    else
        printf("%d is not qualified",n);



}
