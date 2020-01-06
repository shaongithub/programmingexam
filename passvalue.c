#include<stdio.h>

void abc(int x, int y);
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    abc(a,b);
    return 0;
}

void abc(int x, int y)
{
    int z;
    z=x+y;
    printf("%d", z);
}
