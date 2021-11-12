#include <stdio.h>

int main(void) {
    int a, b, r=1; //t1, t2;
    scanf("%d %d", &a, &b);
    //t1 = a;
    //t2 = b;
    while(1){
        r = a % b;
        if(r == 0)
        break;
        a = b;
        b = r;
    }

    printf("G.C.D is %d\n", b);
    //printf("L.C.M is %d\n", (t1*t2) / b);

    return 0;
}
