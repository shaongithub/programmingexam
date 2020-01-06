#include<stdio.h>
int main()
{
    int a[10][10], b[10][10],c[10][10],i,j;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d %d", &a[i][j], &b[i][j]);

    for(i=0; i<3; i++)
        {
        for(j=0; j<3; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
        return 0;
}
