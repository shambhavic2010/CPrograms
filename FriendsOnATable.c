#include <stdio.h>

int main()
{
    int no_of_frnds, no_of_chairs2, no_of_chairs, total=1, numerator, x, y;

    printf("enter number of friends: ");
    scanf("%d", &no_of_frnds);

    printf("enter number of chairs on the table: ");
    scanf("%d", &no_of_chairs);

    if (no_of_chairs-1<=no_of_frnds)
    {
        printf("the probability of none of your friends sitting next to you is 0");
    }
    no_of_chairs2= no_of_chairs+1;

    for( x=1; x<= no_of_frnds+1; x++)
    {
        total= total*(no_of_chairs2-1);
        printf("\ntotal= %d", total);
        no_of_chairs2 = no_of_chairs2-1;
    }
    numerator= no_of_chairs;

    for( x=1; x<= no_of_frnds; x++)
    {
        numerator= (numerator)*(no_of_chairs-3);
        printf("\noption wanted: %d", numerator);
        no_of_chairs=  no_of_chairs-1;
    }

    printf("\nprobability: %d/%d", numerator, total);

    return 0;
}