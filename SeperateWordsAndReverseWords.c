#include <stdio.h>
#include <string.h>

char *revword(char *str);

int main()
{
    char str[20], substr[7];
    char revstr, lastchar;
    int i, j=0, k=0, l, len;

    printf("enter your string: ");
    scanf("%[^\n]",str);
    printf("got the str, str= %s", str);

    for (i=0; i<=strlen(str); i++)
    {
        if ((str[i]!=' ') && (str[i]!='\0'))
        {
            printf("\nsubstr in if area== %s", substr);
            printf("\nentered if, str[i]= %c", str[i]);
            substr[j]=str[i];
            substr[j+1]='\0';
            //printf("substr in if arwa= %s", substr);
            j=j+1;
        }
        else
        {
            printf("\nsubstr=%s", substr);
            len=strlen(substr);
            for (l=0; l<=len/2; l++)
            {
                lastchar=substr[l];
                substr[l]=substr[len-l];
                substr[len-l]=lastchar;
            }
            printf("\nrevstr=%s", substr);
            substr[0] = '\0';
            printf("\n substr= %s", substr);
            j=0;
        }
    }

    return 0;
}

char *revword(char *str)
{
    char lastchar;
    int i, len;
    len=strlen(str);
    for (i=0; i<=len/2; i++)
    {
        lastchar=str[i];
        str[i]=str[len-i];
        str[len-i]=lastchar;
        //printf("\ni= %d", i);
        //printf("\nstr[i]= %c", str[i]);
        //printf("\nstr[len-i]= %c", str[len-i]);
    }
    //printf("\nword=");
    
    
    return str;
}