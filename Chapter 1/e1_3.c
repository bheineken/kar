//FILE: e1_3.c
//NOTE: First real exercise where you need to ammend more code than before
//Compiled in terminal using gcc -o e1_3.obj e1_3.c
//Result is 
//TAKES: introduced variables, int type in this case
//Variable size depends on the machine type. More on this later
//Look at the expression celsius = 5/9 * (fahr - 32). This would give very
//different results from celsius = 5.0/9.0 * (fahr - 32). That is why the
//line in comments would be the correct (as in the book) way of using integers
//Basically integer divisions truncates and fractional parts are discarded
//5.0/9.0 would basically be a float division. Also, note the printf format
//arguments %d\t%d\n. Reading it from left to right then print fahr as int
//then insert a tab. After that print celsius as int and insert a new line.
//About formatted input, one can augment the %d like this %3d %6d\n.
//Basically we got rid of \t and then we right justify in a 3 digits wide fiels
//the first argument (fahr) and then use %6d to add celsius in a 6 digit field
//Finally, obviously this will work as expected by using float variables.
//integer operands yield integer results while using floats with integer
//operands will produce float results

#include <stdio.h>
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    //Easy solution next line which takes a run to arrange correctly
    //printf(" Deg F  Deg C\n");
    //More elegant solution with formatting. Took a google on printf() to be fair
    printf("%6s %6s\n","Deg F","Deg C");
    while (fahr <= upper) {
        //celsius = 5 * (fahr - 32) /9;
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%6.0f %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}