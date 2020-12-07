#include<stdio.h>
int cycleCOunter(int a){

    int cycle =1;
    while(a!=1)
    {
        cycle++;
        if(a%2==0)
            a = a/2;
        else
            a= 3*a+1;
    }
    return cycle;



}
int main()
{
    int n,current_cycle,maxCycle = 0,i,max_cycle_holder;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        current_cycle =  cycleCOunter(i);
        if(current_cycle>maxCycle)
        {
            maxCycle = current_cycle;
            max_cycle_holder = i;
        }

    }
    printf("maximum cycle is %d and the maximum cycle holder is %d",maxCycle,max_cycle_holder);

}
