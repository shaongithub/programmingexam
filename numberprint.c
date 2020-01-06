#include<stdio.h>
int abc();

int main()
{
    int n;
    scanf("%d", &n);
    abc(n);
    return 0;
}

int abc(int n)
{
    if(n==0){
        printf("\n");
        return 0;
    }
        printf("%d ", n);
    abc(n-1);
    printf("%d ", n);
}
