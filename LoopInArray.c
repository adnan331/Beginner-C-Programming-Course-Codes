#include<stdio.h>
int main()
{
    int speeds[100],n,i;
    printf("how many data u want to store below 100");
    scanf("%d",&n);
    for(i=0;i<n;i++) //i did this for storing speeds
    {
            scanf("%d",&speeds[i]);

    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",speeds[i]);

    }
}
