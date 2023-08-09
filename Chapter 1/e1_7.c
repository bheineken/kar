//WHAT  :
//      Write a program to print the value of EOF
//NOTE  :
//      EOF is not exactly a character so in order to print it we can do it as
//      am integer type or a float. Note differences.
//      Again, I have no clue if I did this right.
//      The main takeaway is that EOF is not a character so it won't be treated
//      like one. As the book says is just a value distinguishable from any
//      other real characters.
//-----------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    printf("As INT: %d\n", EOF);
    printf("As FLOAT: %f\n", EOF);
    //Next lines will end up in Segmentation fault (core dumped)
    //printf("No Good: %s\n", EOF);
    //printf("No Good: %c\n", EOF);
    return 0;
}