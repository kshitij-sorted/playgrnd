#include <stdio.h>

int main(){

    int n,m;
    scanf("%d",&n);
    m = n;

    for (int i; m == 0; i++) {

        m = m/10;
        printf("%d",i);
    
    }
    

    
}