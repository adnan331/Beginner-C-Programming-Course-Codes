
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter row number: ");
    scanf("%d",&r);
    printf("Enter column number: ");
    scanf("%d",&c);
    int matrix[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
           printf("%d ",matrix[i][j]);
        }
        printf("\n");


    }
}
