#include <stdio.h>

int main(){

    int y;

    printf("Year: ");
    scanf("%d",&y);

    if (y%4 == 0) {
        
        if (y%100 == 0) {

            if (y%400 == 0) {
            
                printf("Leap Year\n");

            }

            else {
            
                printf("Not Leap Year\n");
            }
        
        }

        if (y%100 != 0) {

            printf("Leap Year\n");
        
        }
    
    }

    else {
    
        printf("Not Leap Year\n");
    }

}