#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char str[200], substr[7], a, b;
    int i, j=0, k=0, l, len, num;
    bool pallindrome = false;

    printf("enter your string: ");
    scanf("%[^\n]",str);
    printf("enter a number: ");
    scanf("%d", num);
    //printf("got the str");

    for (i=0; i<=strlen(str); i++)
    {
        if ((str[i]!=' ') && (str[i]!='\0'))
        {
            substr[j]=str[i];
            substr[j+1]='\0';
            j=j+1;
        }
        else
        {
            //printf("\nsubstr=%s", substr);
            len= strlen(substr);
            for (l=0; l<=len/2-1; l++)
            {
                a= substr[l];
                b= substr[len-l-1];
                if ( a!=b)
                {
                    //printf("\n %c and %c", substr[l], substr[len-l-1]);
                    //printf("\n%s!=pallindrome", substr);
                    pallindrome = false;
                    l=len/2-1;
                }
                else if (a == b)
                {
                    //printf("\n%s==pallindrome", substr);
                    if (len <= num) 
                    {
                        pallindrome = true;
                    }
                }
            }
            if (pallindrome == true)
            {
                printf("\n%s", substr);
            }
            substr[0]='\0';
            j=0;
        }
    }

    return 0;
}