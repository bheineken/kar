//-----------------------------------------------------------------------------
//FILE  :
//      e1_6.c
//WHAT  :
//      Verify expression getchar() != EOF is 0 or 1
//NOTE  :
//      Didn't understand what the exact meaning of the exercise was so I
//      started it simply by checking in code the expresion. It looks like this
//      answer both questions. I am not 100% sure I did this one right.
//      Anyway, running the program and typing a char shows 1 while if
//      you type Ctrl+D (EOF) prints 0.
//-----------------------------------------------------------------------------

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF){
        c = getchar();
        printf("Expression result: %d\n", c != EOF);
    }
    return 0;
}