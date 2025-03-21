#include <stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if (a>c && b>c) {

        printf("C is smallest");
    
    }

    else if(b>a && c>a){

        printf("A is smallest");

    }

    else if(a>b && c>b){

        printf("B is smallest");

    }
}