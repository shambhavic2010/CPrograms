#include <stdio.h>

int total_possibilities( int no_of_chairs, int no_of_frnds)
{
    int total=1, no_of_chairs2, x;

    no_of_chairs2= no_of_chairs+1;

    for( x=1; x<= no_of_frnds+1; x++)
    {
        total= total*(no_of_chairs2-1);
        printf("\ntotal= %d", total);
        no_of_chairs2 = no_of_chairs2-1;
    }
    return total;
}

int wanted_possibilities( int no_of_chairs, int no_of_frnds)
{
    int numerator, x;
    numerator= no_of_chairs;
    for( x=1; x<= no_of_frnds; x++)
    {
        numerator= (numerator)*(no_of_chairs-3);
        printf("\noption wanted: %d", numerator);
        no_of_chairs=  no_of_chairs-1;
    }
    return numerator;
}

int main()
{
    int no_of_frnds, no_of_chairs, total, numerator;

    printf("enter number of friends: ");
    scanf("%d", &no_of_frnds);

    printf("enter number of chairs on the table: ");
    scanf("%d", &no_of_chairs);

    if (no_of_chairs-1<=no_of_frnds)
    {
        printf("the probability of none of your friends sitting next to you is: 0");
    }
    else
    {
        
        total= total_possibilities(no_of_chairs, no_of_frnds);
        
        numerator= wanted_possibilities(no_of_chairs, no_of_frnds);

        printf("\nthe probability of none of your friends sitting next to you is: %d/%d", numerator, total);
    }

    return 0;
}