#include<stdio.h>
int main()
{
    char a[100],b[200];
    int i;
    scanf("%s %s", a,b);

    i=0;
    while(a[i]==b[i] && a[i]!='\0' && b[i]!='\0')
        i++;
    if(a[i]==b[i])
        printf("Same\n");
    else
    printf("Not Same");

    return 0;
}
