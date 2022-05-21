#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, j;
    printf("enter your number: ");
    scanf("%d", &num);

    for (i=0; i<=8; i++)
    {
        j= num/pow(10, i);
        if (j == pow(10, 8))
        {
            j=j*10;
            printf("%d Crores", j);
        }
        else if (j == pow(10, 7))
        {
            printf("%d Crores", j);
        }
        else if (j == pow(10, 6))
        {
            j=j*10;
            printf("%d Lakhs", j);
        }
        else if (j == pow(10, 5))
        {
            printf("%d Lakhs", j);
        }
        else if (j == pow(10, 4))
        {
            j=j*10;
            printf("%d Thousands", j);
        }
        else if (j == pow(10, 3))
        {
            printf("%d Thousands", j);
        }
        else if (j == pow(10, 2))
        {
            printf("%d Hundreds", j);
        }
        else if (j == pow(10, 1))
        {
            j=j*10;
            printf("%d ", j);
        }
        else if (j == pow(10, 0))
        {
            printf("%d ", j);
        }

    }
}