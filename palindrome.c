#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k;
    char a[100],b[100];

    scanf("%s", a);
    n=strlen(a);
    for(i=n-1,k=0; i>=0; k++,i--)
        b[k]=a[i];
    b[k]='\0';
    i=0;
    while(a[i]==b[i] && a[i]!='\0' && b[i]!='\0')
        i++;
    if(a[i]==b[i])
        printf("Palindrome\n");
    else
    printf("Not Palindrome\n");

    return 0;

}
