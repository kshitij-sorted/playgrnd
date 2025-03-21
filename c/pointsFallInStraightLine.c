#include <stdio.h>

int main(){

    float x1,x2,x3,y1,y2,y3;
    float m1,m2;
    scanf("%f %f %f %f %f %f",&x1,&x2,&x3,&y1,&y2,&y3);

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if (m1 == m2) {

        printf("All the points lie in same line");
    
    }

    else {
    
        printf("Not in same line");
    }

    

}