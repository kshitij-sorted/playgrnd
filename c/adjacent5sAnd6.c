#include <stdio.h>

int main(){

    int ar[5];

    for (int i = 0,n; i < 5 ; i++ ) {

        scanf("%d",&n);
        ar[i] = n;
    
    }

    for (int i = 0; i<= 5; i++) {

        if (ar[i]==5 && ar[i+1]==5 || ar[i+1]==6) {

            printf("Appears");
        
        }
    
    }

}
