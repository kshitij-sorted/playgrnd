#include <stdio.h>

int main(){

    int a,x;
    scanf("%d",&a);
    
    if (a < 0) {

       x = a*(-1); 
    
    }

    else {
    
        x = a;
    }

    printf("%d\n",x);

    return 0;
}