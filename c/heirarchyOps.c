#include <stdio.h>
int main()
{
    int i = 2,j = 3,k,l;
    float a,b,g,m,p,o,f;
    k = i/j *j;
    l = j/i *i;
    a = i/j *j;
    b = j/i *i;
    printf("%d %d %d %d\n",a,b,k,l);

    g = 7/22*(3.14+2)*3/5;
    o = 7.0/22*(3.14+2)*3/5;
    p = 21%4;
    m = 4 + 2%-8;
    f = 2/7.0;
    printf("%f %f %f %f %f",g,o,p,m,f);

    return 0;
}