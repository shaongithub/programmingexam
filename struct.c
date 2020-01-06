#include<stdio.h>

struct student
    {
        int id;
        char name[50];
        char dept[5];
        float cgpa;
    }obj[100];
int main()
{
   int i,n;
   scanf("%d", &n);
   for(i=1; i<=n; i++)
        scanf("%d %s %s %f", &obj[i].id, &obj[i].name, &obj[i].dept, &obj[i].cgpa);
   for(i=1; i<=n; i++)
        printf("%d %s %s %0.2f\n", obj[i].id, obj[i].name, obj[i].dept, obj[i].cgpa);
   return 0;
}

