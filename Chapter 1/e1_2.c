//FILE: e1_1.c
//NOTE: First exercise from the book. Modified a bit the main function to be 
//compatible with the new standard. It returns an integer.
//Compiled in terminal using gcc -o e1_2 e1_2.c
//Compiler returns the message (but it still creates output file):
//e1_2.c: In function ‘main’:
//e1_2.c:10:27: warning: unknown escape sequence: '\c'
//   10 |     printf("hello world\c");
//      |    
//Result is the text "hello worldc" followed by the terminal prompt with no spaces

#include <stdio.h>
int main()
{
    printf("hello world\c");
    return 0;
}