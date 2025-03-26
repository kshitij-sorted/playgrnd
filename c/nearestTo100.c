#include <stdio.h>

int main(){

    int n,m,a,b;
    scanf("%d %d",&n,&m);

    a = 100 - n;
    b = 100 - m;

    if (a < 0) {

        a = -1*a;
    
    }

    if (b < 0) {

        b = -1*b;
    
    }
    
    if (a > b) {

        printf("%d is closer to 100",m);
    
    }

    else if (b>a) {

        printf("%d is closer to 100",n);
    
    }

    else {
    
        printf("0");
    }
}