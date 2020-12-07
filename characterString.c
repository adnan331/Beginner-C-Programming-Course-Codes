#include<stdio.h>
int main(){

    char country[100];
    int length,i;
    /*country[0] = 'B';
    country[1] = 'A';
    country[2] = 'N';
    country[3] = 'G';
    country[4] = 'L';
    country[5] = 'A';
    country[6] = 'D';
    country[7] = 'E';
    country[8] = 'S';
    country[9] = 'H';*/

    for(i=0; ;i++){
        scanf("%c ",&country[i]);
        if(country[i]=='\n')
            {
                length = i;
                break;
            }
    }
    for(i=0;i<length;i++){
    printf("%c ",country[i]);

    }




}
