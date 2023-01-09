#include <stdio.h>

int main()
{
    int arr[5][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 1}, {1, 2, 3, 4, 5}, {6, 7, 8, 9, 2}, {1, 2, 3, 4, 5}}, i, j, k, l, m;

    i=5;

    for(j=0; j<i; j++)
    {
        printf("%d ", arr[0][j]);
    }
    printf("\n");

    for(k=1; k<(i-1); k++)
    {
        printf("%d ", arr[k][0]);
        for(l=1; l<(i-1); l++)
        {
            printf("  ");
        }
        printf("%d ", arr[k][i]);
        printf("\n");
    }

    for(m=0; m<i; m++)
    {
        printf("%d ", arr[5][m]);
    }

    return 0;

}