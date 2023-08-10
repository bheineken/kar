//WHAT  :
//      Write a program to count blanks, tabs, newlines
//NOTE  :
//      Approach for this is again using getchar() but if I can't use if - else
//      I am not sure I can do this in a single program. Therefore this version
//      uses if - else or only if's. 
//      I think I started to get used with getchar(). This little bugger in a
//      loop is like the prompt waiting for a command. Maybe a side exercise
//      would be to simulate such a prompt entry command, a dummy one.
//-----------------------------------------------------------------------------


#include <stdio.h>

int main()
{
    int c;
    int b = 0, t = 0, n = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            ++n;
        if (c == '\t')
            ++t;
        if (c == ' ')
            ++b;
    }

    printf("Blanks counted: %d\n",b);
    printf("Tabs counted: %d\n",t);
    printf("Newlines counted: %d\n",n);
    return 0;
}