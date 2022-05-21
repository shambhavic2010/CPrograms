#include <stdio.h>

int main()
{
    int arr[5], i, j=0, k=0, swap;
    printf("numbers you enter must be either 1, 2, or 3\n");
    for(i=0; i<=4; i++)
    {
        printf("enter a number: ");
        scanf("%d", &arr[i]);
    }
        for (k=k; k<=4; k++)
        {   swap=arr[j];
            if (arr[k]==0)
            {
                arr[j]=arr[k];
                printf("\n arr[k]= %d, arr[j]= %d", arr[k], arr[j]);
                arr[k]=swap;
                j=j+1;
            }
        }
    
        for (k=k; k<=4; k++)
        {   swap=arr[j];
            if (arr[k]==1)
            {
                arr[j]=arr[k];
                printf("\n arr[k]= %d, arr[j]= %d", arr[k], arr[j]);
                arr[k]=swap;
                j=j+1;
            }
        }
   
        for (k=k; k<=4; k++)
        {   swap=arr[j];
            if (arr[k]==2)
            {
                arr[j]=arr[k];
                printf("\n arr[k]= %d, arr[j]= %d", arr[k], arr[j]);
                arr[k]=swap;
                j=j+1;
            }
        }
    
    printf("\n");
    for(i=0; i<=4; i++)
    {
        printf("%d", arr[i]);
    }

}