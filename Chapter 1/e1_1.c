//FILE: e1_1.c
//NOTE: First exercise from the book. Modified a bit the main function to be 
//compatible with the new standard. It returns an integer.
//Compiled in terminal using gcc -o e1_1 e1_1.c
//Result is terminal outputs string "hello world"
//TAKES: main() is the entry point in a C program and it is a function.
//It is not changeable in any way and it must exists.
//Functions communicate data between them using arguments. Not here though.
//Escape sequence like \n - new line character, line advance
//printf() does not supplies a newline automagically

#include <stdio.h>
int main()
{
    printf("hello world\n");
    return 0;
}