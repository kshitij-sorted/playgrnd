#include <stdio.h>
int main()
{
    int a;
    printf("Enter: ");
    scanf("%d",&a);
    if (a%5 == 0) {
        printf("yes");
    }
    if (a%5 != 0) {
        printf("No");
    }
    return 0;
}