#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input, decspeed, speed1, speed2, distance, disbyme, disbycar, difdis;
    printf("enter your speed of deceleration: ");
    scanf("%d", &input);


    speed1= 7;
    speed2= 10;
    decspeed= 2;
    distance= 15;

    disbyme= (speed1*speed1)/(2*input);
    disbycar= (speed2*speed2)/(2*decspeed);
    difdis= (distance+disbycar)-disbyme;
    printf("\n%f", difdis);
    return 0;
}