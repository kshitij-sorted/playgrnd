#include <stdio.h>

int main(){

    int l,b,a,p;
    scanf("%d %d",&l,&b);

    a = l*b;
    p = 2*(l+b);

    if (a>p) {

        printf("area > peri\n");
    
    }
    else if (p>a) {
    
        printf("peri > area\n");
    }
    else {
    
        printf("peri = area\n");
    }
    return 0;

}