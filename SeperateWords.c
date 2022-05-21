#include <stdio.h>

int main()
{
    char str[20], substr[7];
    int i, j=0, k=0;

    printf("enter your string: ");
    scanf("%[^\n]",str);
    //printf("got the str");

    for (i=0; i<=strlen(str); i++)
    {
        if ((str[i]!=' ') && (str[i]!='\0'))
        {
            substr[j]=str[i];
            j=j+1;
        }
        else
        {
            printf("\nsubstr=%s", substr);
            for (k=0; k<=strlen(substr-1); k++)
            {
                substr[k]=0;
            }
            j=0;
        }
    }

    return 0;
}