//FILE: e1_5.c
//NOTE: used the for loop for this one instead of while and also since I have
//read a bit further decided to use here "magic numbers". Basically constants.
//Did not bother to comment the code since this is very simple

#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20
#define RATIO   0.55555555555

int main()
{
    float fahr,celsius;
    printf("%6s %6s\n","Deg F","Deg C");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP){
        celsius = RATIO * (fahr - 32.0);
        printf("%6.0f %6.2f\n", fahr, celsius);
    }
    return 0;
}