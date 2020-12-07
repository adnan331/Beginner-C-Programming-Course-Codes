#include<stdio.h>
int main()
{
    int N,count=0;
    while(1){
            count++;
        scanf("%d",&N);
        double sum = 0;
        double num;
        int i;
        for(i=1;i<=N;i++){
            scanf("%lf",&num);
            sum += num;
        }
        printf("Case %d: %lf\n",count,sum/N);




    }

}
