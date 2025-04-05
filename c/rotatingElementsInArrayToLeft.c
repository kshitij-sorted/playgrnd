#include <stdio.h>

int main(){

    int ar[5],m;

    for (int i = 0,n; i < 5; i++) {
        
        scanf("%d",&n);
        ar[i] = n;

    }
    for (int i = 0; i < 5; i++) {

        printf("%d ",ar[i]);
    
    }
    m = ar[0];
    for (int i = 0,n; i < 5; i++) {
        
            n = ar[i];
            ar[i-1] = n;
            
    
    }
    ar[4] = m;
    printf("\n");
    for (int i = 0; i < 5; i++) {

        printf("%d ",ar[i]);
    
    }
    

}