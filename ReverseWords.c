#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], lastchar;
    int i, len;
    printf("\nenter your string: ");
    scanf("%s", str);
    len=strlen(str);
    for (i=0; i<=len/2; i++)
    {
        lastchar=str[i];
        str[i]=str[len-i];
        str[len-i]=lastchar;
        printf("\ni= %d", i);
        printf("\nstr[i]= %c", str[i]);
        printf("\nstr[len-i]= %c", str[len-i]);
    }
    printf("\nword=");
    for (i=0; i<=len; i++)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}