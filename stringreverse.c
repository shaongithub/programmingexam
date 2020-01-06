#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k;
    char a[100],b[100];
    gets(a);

    n=strlen(a);
    for(i=n-1,k=0; i>=0; k++,i--)
        b[k]=a[i];
    b[k]='\0';
    printf("%s", b);
    return 0;

}
