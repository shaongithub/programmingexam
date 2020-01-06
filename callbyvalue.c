#include<stdio.h>

void abc(int x, int y);
int main()
{
    int a=10,b=20;
    abc(a,b);
    printf("%d %d", a,b);
    return 0;
}
void abc(int a, int b)
{
    a=a+10;
    b=b+20;
    printf("%d %d\n", a,b);
}
