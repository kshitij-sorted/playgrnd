#include <stdio.h>

int main(){

    int x,m,o,sum = 0;
    scanf("%d",&x);

    for (int i=1,d,n=x; n%10 >= 1;i++ ) {

        d = n%10;
        n = n/10;

        if (n%10 == 0) {

            m = i;
        
        }
    }

    for (int i=1,d,n=x; n%10 >= 1;i++ ) {

        d = n%10;

        for (int i=1,p=1; i<=m; i++) {

            p = p * d ;

            if (i == m) {

                o = p;
            
            }
        
        }

        sum = sum +o;

        printf("%d %d %d %d %d %d\n",m,i,n,d,o,sum);
        
        n = n/10;
    
    }

    if (x == sum) {

        printf("Armstrong");
    
    }

    else {
    
        printf("Not Armstrong");
        
    }

}
