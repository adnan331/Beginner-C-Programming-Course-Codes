#include<stdio.h>
void evenOddChecker(int a){
    if(a%2==0)
        printf("%d is Even",a);
        //return 2;
    else
        printf("%d is odd",a);
        //return 3;
}
int main(){

    int n;
    scanf("%d",&n);
   /*int result = */ evenOddChecker(n);
   //printf("result returned by the funcion is %d\n",result);
   //if(result==2)
    //printf("%d is Even",n);
   //else
    //printf("%d is Odd",n);

}
