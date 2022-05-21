#include <stdio.h>

int main()
{
    int x=1, y, z, i, arr[5], arr2[3];

    for (i=0; i<=4; i++)
    {
        printf("enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (y=0; y<=2; y++)
    {
        arr2[x] = arr[y]+arr[y+1]+arr[y+2];
        printf("\n%d", arr2[x]);
        x = x+1;
    }
    if (arr2[0]>=arr2[1])
    {
        z= arr2[0];
        printf("\n%d", arr2[0]);
    }
    else
    {
        z= arr2[1];
        printf("\n%d", arr2[1]);
    }
    if(arr2[2]>=z)
    {
        //printf("greatest sum= %d", arr2[2]);
    }
    else
    {
        //printf("greatest sum= %d", z);
    }
}