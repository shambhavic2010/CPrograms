#include <stdio.h>

int main()
{
    int arr[4], i, num, j;
    printf("\nenter your number: ");
    scanf("%d", &num);
    for (i=0; i<=4; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i=0; i<=4; i++)
    {
        //printf("\ni= %d", i);
        //printf("\narr[i]= %d", arr[i]);
        //printf("\nin for loop 2.0");
        for (j=(i+1); j<=4; j++)
        {
            //printf("\narr[[j]= %d", arr[j]);
            if (arr[i]+arr[j] == num)
            {
                printf("\n%d, %d", arr[i], arr[j]);
                //sumnum = arr[j+1];
            }
        }
    }
    return 0;
}