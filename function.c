#include<stdio.h>

void abc();
int main()
{
    abc();
    return 0;
}
void abc()
{
    int a,b,c;
    scanf("%d %d", &a, &b);
    c=a+b;
    printf("%d", c);
}
