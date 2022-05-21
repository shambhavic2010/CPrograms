#include <stdio.h>

int swapp(int arr[], int j, int k);
int arrange(int arr[], int j, int k, int valuetoarrange);

int main()
{
    int arr[5], i, j=0, k=0;
    printf("numbers you enter must be either 1, 2, or 0\n");
    for(i=0; i<=4; i++)
    {
        printf("enter a number: ");
        scanf("%d", &arr[i]);
    }
    j = arrange(arr, j, k, 0);
    
    arrange(arr, j, k, 1);   
        
    printf("\n");
    for(i=0; i<=4; i++)
    {
        printf("%d", arr[i]);
    }

}

int swapp(int arr[], int j, int k)
{
    int x;
    x=arr[j];
    arr[j]=arr[k];
    arr[k]=x;
}
int arrange(int arr[], int j, int k, int valuetoarrange)
{
    for (k=j; k<=4; k++)
    {
        if (arr[k]==valuetoarrange)
        {
            swapp(arr, j, k);       
            j=j+1;
        }
    }
    return j;
}