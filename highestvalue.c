#include <stdio.h>

int main()
{
    int arr[5], i, finalnum=0;
    for (i=0; i<=4; i++)
    {
        printf("enter a number: ");
        scanf("%d", &arr[i]);
    }
    for (i=0; i<=4; i++)
    {
        if (arr[i]<=1)
        {
            finalnum = finalnum+arr[i];
            //printf("\n%d", finalnum);
        }
        if (arr[i]>=2) 
        {
            if (finalnum == 0)
            {
                finalnum = finalnum+arr[i];
                //printf("%d", finalnum);
            }
            else
            {
                finalnum = finalnum*arr[i];
                //printf("\n%d", finalnum);
            }
        }
    }
    printf("%d", finalnum);

    return 0;
}