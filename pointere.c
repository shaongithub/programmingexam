#include<stdio.h>
int main()
{
    int a=10, *p, *q;
    p=&a;
    q=&a;
    printf("%d \n", *p);
    *p=*p+10;
    printf("%d", *p);
    printf("\n%d\n", a);

    *q=*q+*p;
    printf("%d %d %d", a, *p, *q);
    return 0;
}
