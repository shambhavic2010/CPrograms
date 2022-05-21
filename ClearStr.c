#include <stdio.h>

int main()
{
    char mystring[20];
    printf("\nenter the str: ");
    scanf("%s", mystring);
    mystring[0] = '\0';
    printf("\n my str= %s", mystring);

    return 0;
}