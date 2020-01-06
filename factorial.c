#include<stdio.h>
int fact(int n)
{
    int f;
    if(n==1)
        return 1;
    f=n*fact(n-1);
    return f;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

