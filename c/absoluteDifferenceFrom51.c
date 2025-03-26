#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    int a = abs(51 - n);
    if (a<0) {

        a = -1*a;
    
    }
    if (a > 51) {

        printf("%d",3*a);
    
    }
    else {
    
        printf("%d",a);
    }


}