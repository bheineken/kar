//-----------------------------------------------------------------------------
//FILE  :
//      e1_9.c
//WHAT  :
//      Write a program to copy its input to its output, replacing each
//      string of one or more blanks by a single blank
//NOTE  :
//      Now, by cheating (searching) I have been looking for an idea and the
//      one I understood was basically check if the character you enter is 
//      not the same as the one before or a blank. If that's not the case just
//      putchar() it. Yurns out that I still don't understand fully getchar()
//      and putchar() put together. Back to reading.
//      Also, make up your mind how to write curly braces.
//      I did this test to see again how it works. Added a newline at the end
//      just to clean it up a bit. So basically each getchar will putchar it
//      everytime as long as it's in the loop.
//      int main(){
//      int c;
//    
//      while((c = getchar()) != '\n'){
//          putchar(c);
//      }
//    
//      printf("\n");
//    
//      return 0;
//      }
//-----------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int c;
    int prevchar;
    
    while((c = getchar()) != '\n')
    {
        if(c != prevchar || prevchar != ' ')
            putchar(c);           
        prevchar = c;
    }
    printf("\n");
    return 0;
}