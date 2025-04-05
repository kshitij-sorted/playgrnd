#include <stdio.h>

int main(){

    int ar[5];

    for (int i = 0,n; i < 5 ; i++ ) {

        scanf("%d",&n);
        ar[i] = n;
    
    }

    for (int i = 0; i<= 5; i++) {

        if ((ar[i]==1 && ar[i+1]==2) && ar[i+2]==3) {

            printf("Appears\n");
        
        }
    
    }

}