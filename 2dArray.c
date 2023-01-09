#include <stdio.h>

int main()
{
    int arr[5][5] = {{0, 1, 2, 3, 4}, {3, 4, 5, 6, 7}, {5, 8, 2, 9, 1}, {2, 6, 7, 9, 1}, {6, 7, 6, 4, 3}}, i, j;

    for (i=0; i<5; i++)
    {
        for (j=1; j<5; j++)
        {
            printf(" %d ", arr[i][j]);

            j= j+2;
        }

        printf("\n");
        
    }

    return 0;
}