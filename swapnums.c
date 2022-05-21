#include <stdio.h>

int main()
{
    int a, b;

    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter another number: ");
    scanf("%d", &b);
    b=b-a;
    a=a+b;
    b=a-b;
    printf("a= %d, b= %d", a, b);

    return 0;
}