#include <stdio.h>

int main(){

    int x,y;
    scanf("%d %d",&x,&y);

    if (x == 0) {
        
        printf("Y axis");
    }

    else if (y == 0) {
    
        printf("X axis");
    }

    else if (x == 0 && y == 0) {
    
        printf("At origin");

    }

    else {
    
        printf("Neither");
    }


    return 0;
}