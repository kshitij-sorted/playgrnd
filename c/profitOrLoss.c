#include <stdio.h>

int main(){

    int sp,cp,p,l,x;

    scanf("%d %d",&sp,&cp);

    x = sp - cp;

    if(x > 0){

        p = sp - cp ;
        printf("Profit %d\n",p);

    }

    else if(x < 0){

        l = sp - cp ;
        printf("Profit %d\n",l);

    }

}