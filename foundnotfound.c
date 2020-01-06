#include<stdio.h>
int main()
{
    int a[100],t=0,i,m,n;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    i=0;
    while(i!=n)
    {
        if(a[i]==m)
            t++;
        i++;
    }
    if(t==0)
        printf("Not Found\n");
    else
        printf("Found\n");
    return 0;
}
