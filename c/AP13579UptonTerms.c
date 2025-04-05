#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for (int i = 1; i <= 1+(n-1)*2 ; i = i + 2) {
    
        printf("%d \n",i);
    }
}