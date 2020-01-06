#include<stdio.h>
int main()
{
    int i;
    char a[100],b[100];
    scanf("%s", a);

    for(i=0; a[i]!='\0'; i++)
        b[i]=a[i];
    b[i]='\0';
    printf("%s", b);
    return 0;

}
