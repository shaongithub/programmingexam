#include<stdio.h>
int main()
{
    int n,i;
    char a[100];
    gets(a);
    n=strlen(a);
    printf("%d", n);

    i=0;
    while(a[i]!='\0')
        i++;

    printf("\n%d", i);

    return 0;
}
