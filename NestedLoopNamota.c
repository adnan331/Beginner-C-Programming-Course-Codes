
#include<stdio.h>
int main()
{

        int i,j;
        for(i=1;i<=6;i++)
        {
            printf("number table of %d:\n",i);
            for(j=1;j<=10;j++)
            {
                printf("%d X %d = %d\n",i,j,i*j);
            }
            printf("\n\n");
        }

}
