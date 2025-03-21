#include <stdio.h>

int main(){

    int a;
    scanf("%d",&a);

    if (a < 40) {

        printf("Fail");
    
    }

    else if (40<=a && a<50) {

        printf("Bellow Average");
    
    }

    else if (50<=a && a<60) {

        printf("Average");
    
    }

    else if (60<=a && a<70) {

        printf("Above average");
    
    }

    else if (70<=a && a<80) {

        printf("Good");
    
    }

    else if (80<=a && a<90) {

        printf("Very Good");
    
    }

    else if (90<a && a<100) {

        printf("Excellent");
    
    }
}