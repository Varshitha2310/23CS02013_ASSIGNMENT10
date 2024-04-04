#include<stdio.h>
int main()
{
    union data{
        int a;
        float b;
        char c[100];
    };
    union data d;
    printf("enter value pf a:");
    scanf("%d",&d.a); 
    printf("enter value of b:");
    scanf("%f",&d.b);
    printf("enter values of t:");
    scanf("%s",&d.c);
    printf("%d\n",d.a);
    printf("%f\n",d.b);
    printf("\n%s",d.c);
}