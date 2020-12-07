#include<stdio.h>
int main()
{
    int sum=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("sum is %d",sum);

    return 0;
}

