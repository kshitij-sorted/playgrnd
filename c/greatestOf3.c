#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c) {
    
        printf("%d is greatst",a);

    }

    else if (b>a && b>c) {
    
        printf("%d is greatst",b);

    }

    else if (c>a && c>b) {

        printf("%d is greatest",c);
    
    }
}