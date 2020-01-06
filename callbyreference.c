#include<stdio.h>

int main()
{
    int a=10,b=20;
    abc(&a,&b);
    printf("%d %d", a,b);
    return 0;
}
void abc(int *x, int *y)
{
    *x=*x+10;
    *y=*y+10;
    printf("%d %d\n", *x, *y);
}

