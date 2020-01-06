#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k;
    char a[100],b[100];

    scanf("%s %s", a,b);
    n=strlen(a);
    for(i=0; b[i]!='\0'; i++)
        a[n+i]=b[i];
        a[n+i]='\0';
    printf("%s", a);
    return 0;

}
