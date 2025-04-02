#include <stdio.h>

int main(){

    int ar[5],sum;

    for (int i =0,n; i<5; i++) {

        scanf("%d",&n);
        ar[i] = n;
    
    }
    for (int i=0; i <=5 ; i++) {
        
        sum = sum + ar[i];
    }
    printf("%d",sum);
    
}