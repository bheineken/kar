//-----------------------------------------------------------------------------
//FILE  :
//      e1_10.c
//WHAT  :
//      Write a program to copy its input to its output, replacing each tab
//      by \t, each backspace by \b, and each backslash by \\
//NOTE  :
//      I think I got this one right but I can't capture backspace in console
//-----------------------------------------------------------------------------

#include <stdio.h>
#define TRUE  1
#define FALSE  0

int main() {
    int ch,spec_char;
 
    while((ch = getchar()) != '\n')
    {
        spec_char = FALSE;
        if(ch == '\t'){
            putchar('\\');
            putchar('t');
            spec_char = TRUE;
        }
        if(ch == '\\'){
            putchar('\\');
            putchar('\\');
            spec_char = TRUE;
        }
        if(ch == '\b'){
            putchar('\\');
            putchar('b');
            spec_char = TRUE;
        }
        if (spec_char == FALSE)
            putchar(ch);
    }
    printf("\n");
    return 0;
}