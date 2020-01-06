#include<stdio.h>
int main()
{
    int a[100],i,n,min,max;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    min=a[0];
    max=a[0];
    i=1;
    while(i!=n)
    {
        if(a[i]<=min)
            min=a[i];
        if(a[i]>=min)
            max=a[i];
        i++;
    }
    printf("%d\n", min);
    printf("%d", max);

    return 0;
}
