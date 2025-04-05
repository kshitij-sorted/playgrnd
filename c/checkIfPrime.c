#include <stdio.h>

int main(){

    printf("Enter the number\n");

    int n,c;
    scanf("%d",&n);

    if (n <= 1) {

        printf("Not a prime number\n");
    
    }
    
    else {
    
        for (int i = 1; i <= n ; i++) {

            if (n%i == 0) {

                c++;
            
            }
        
        }

        if ( c > 2 ) {

            printf("Not Prime\n");
        
        }

        else {
        
            printf("Prime Number\n");
        }

    }
}