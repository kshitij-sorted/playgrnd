#include <stdio.h>

int main(){

    int n ;
    scanf("%d",&n);

    for (int i = 4; i <= 4+(n-1)*3 ; i = i + 3 ) {

        printf("%d\n",i);

    }
}