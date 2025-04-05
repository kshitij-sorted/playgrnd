#include <stdio.h>
int main()
{
    int a,b,c,r;
    scanf("%d %d",&a,&b);
    c = a/b ;
    r = a-(b*c);
    printf("%d",r);
    return 0;
}