#include <stdio.h>

int main()
{
    int i, x, z=0, arr[20], arr2[20];
    printf("enter number of numbers u want to input: ");
    scanf("%d", &x);

    for (i=0; i<=x-1; i++)
    {
        printf("enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (i=0; i<=x-3; i++)
    {
        arr2[i]= arr[i]+arr[i+1]+arr[i+2];
        if (arr2[i]>z)
        {
            z= arr2[i];
            //printf("\n%d", z);
        }
        //printf("\nsum of 3 nums= %d", arr2[i]);
    }

    /*for (i=0; i<=x-4; i++)
    {
        if (arr2[i]>z)
        {
            z= arr2[i];
            //printf("\n%d", z);
        }
        else 
        {
            z= z;
            //printf("\n%d", z);
        }
    }*/
    printf("\n%d", z);

    return 0;
}