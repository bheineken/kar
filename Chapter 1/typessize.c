//NOTE:
//char is a single byte size type, character.
//Introducing some decision blocks like "while"
// What I have found on internet in regards to types:
//-----------------------------------------------------------------------------
//type                      B   range                               format
//-----------------------------------------------------------------------------
//short int                 2   -32,768 to 32,767                   %hd
//unsigned short int        2   0 to 65,535                         %hu
//unsigned int              4   0 to 4,294,967,295                  %u
//int                       4   -2,147,483,648 to 2,147,483,647     %d
//long int                  4   -2,147,483,648 to 2,147,483,647     %ld
//unsigned  long int        8   0 to 4,294,967,295                  %lu
//long long long int        8   -(2^63) to (2^63)-1                 %lld
//unsigned long long int    1   0 to 18,446,744,073,709,551,615     %llu
//signed char               1   -128 to 127                         %c
//unsigned char             1   0 to 255                            %c
//float                     4   no idea                             %f
//double                    8   no idea                             %lf
//long double               12  no idea                             %Lf
//-----------------------------------------------------------------------------





#include <stdio.h>
 
int main()
{
    printf("    short int is %2d bytes \n", sizeof(short int));
	printf("          int is %2d bytes \n", sizeof(int));
	printf("        int * is %2d bytes \n", sizeof(int *));
	printf("     long int is %2d bytes \n", sizeof(long int));
	printf("   long int * is %2d bytes \n", sizeof(long int *));
	printf("   signed int is %2d bytes \n", sizeof(signed int));
	printf(" unsigned int is %2d bytes \n", sizeof(unsigned int));
	printf("\n");
	printf("        float is %2d bytes \n", sizeof(float));
	printf("      float * is %2d bytes \n", sizeof(float *));
	printf("       double is %2d bytes \n", sizeof(double));
	printf("     double * is %2d bytes \n", sizeof(double *));
	printf("  long double is %2d bytes \n", sizeof(long double));
	printf("\n");
	printf("  signed char is %2d bytes \n", sizeof(signed char));
	printf("         char is %2d bytes \n", sizeof(char));
	printf("       char * is %2d bytes \n", sizeof(char *));
	printf("unsigned char is %2d bytes \n", sizeof(unsigned char));
    return 0;
}