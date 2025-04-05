#include <stdio.h>

int main(){

    int ar[5] = {10,20,30,40,50};

    int s = sizeof(ar)/sizeof(int);

    printf("%d\n",s);

    if ((s)%2 == 0) {
    
        printf("Has Even Number Of elements\n");

        for (int i = 0; i <= s/2; i++) {

            ar[i] = ar[i] + ar[(s-i-1)];
            ar[s-i-1] = ar[i] - ar[(s-i-1)];
            ar[i] = ar[i] - ar[s-i-1] ;
        }
    }

    else {

        printf("Has Odd number of elements\n");
    
    }

    for (int i = 0; i<=5; i++) {

        printf("%d ",ar[i]);

    }

    printf("\n");


}