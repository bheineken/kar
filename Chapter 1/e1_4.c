//FILE: e1_4.c
//NOTE: Nothing to note except the fact that I thought that the code gives
//wrong results until I realized that 9/5 is exactly 1.8 and the steps is
//in fact multiple of 10 thus Fahrenheit degrees will always be round

#include <stdio.h>
int main()
{
    float fahr,celsius;
    int upper,lower,step;
    //Let's start at 0 Fahrenheit juts like the other program 
    //and let's add the header
    //After a quick google fahrenheit = (celsius * 9/5) +32
    upper = 200;
    lower = 0;
    step = 20;
    printf("%6s %6s\n","Deg C","Deg F");
    celsius = lower;
    while (celsius <= upper){
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%6.0f %6.2f\n",celsius,fahr);
        celsius = celsius + step;
    }
    return 0;
}