#include<stdio.h>
int main()
{
    int n,i,j,a[100];
    scanf("%d", &n);

    i=0;
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1; j>=0; j--)
        printf("%d", a[j]);
    return 0;
}
