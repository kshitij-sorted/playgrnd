#include <stdio.h>

int main(){

    int a,b,c,l,w,h;
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c) {
    
        h = a;

    }

    else if (b>a && b>c) {
    
        h = b;

    }

    else if (c>a && c>b) {

        h = c;
    
    }

    if (h == a) {

        w = b;
        l = c;
    }

    else if (h == b) {

        w = c;
        l = a;
    }

    else if (h == c) {

        w = b;
        l = a;

    }

    if (h*h == w*w + l*l) {
    
        printf("\nTriangle");

    }

    else{

        printf("\nNot a Triangle\n");
    }


}