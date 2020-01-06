#include<stdio.h>
int main()
{
    int n,i,cnt,k,sum=1,a[100];

    scanf("%d", &n);

    cnt=0;

    for(i=2; i<n; i++)
        if(n%i==0){
        a[cnt]=i;
        cnt++;
        }

    for(k=0; k<cnt; k++)
        sum=sum+a[k];

    if(n==sum)
        printf("Perfect Number\n");
    else
        printf("Not Perfect Number\n");
    return 0;
}
