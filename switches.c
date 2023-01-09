#include <stdio.h>

int main()
{
    int arr[100], i, j, k, l, m;

    for(j=0; j<100; j++)
    {
        arr[j]= -1;
    }
    for(k=1; k<=100; k++)
    {
        for(i=1; i<=100; i++)
        { 
            if(i*k <= 100)
            {
                arr[(i*k)-1] = arr[(i*k)-1] * (-1);
            }
            else
            {
                i = 100;
            }

        }
    }
    for(l=0; l<100; l++)
    {
        printf("%d = %d\n", l+1, arr[l]);
    }

    return 0;
}