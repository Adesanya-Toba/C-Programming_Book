#include <stdio.h>

int main()
{
    unsigned char charsize;
    unsigned int intsize;
    long longsize = 345UL;
    double num = 123.8F;

    int octal_num = 0123; // the leading zero represents an octal number.
    int hex_num = 0x1a; 
    

    // Exploring size of types and their range
    printf("Size of char is: %ld byte%s\n", sizeof(char), sizeof(char) == 1? "" : "s"); // adds 's' to byte if neccessary
    printf("Minimum value for a signed char is: %d\n", -(char) ((unsigned char)(~0) >> 1) - 1);
    printf("Maximum value for a signed char is: %d\n\n", (char) ((unsigned char)(~0) >> 1));

    printf("Size of int is: %ld byte%s\n", sizeof(int), sizeof(int) == 1? "" : "s");
    printf("Minimum value for a signed int is: %d\n", -(int) ((unsigned int)(~0) >> 1) - 1);
    printf("Maximum value for a signed int is: %d\n\n", (int) ((unsigned int)(~0) >> 1));

    printf("Size of short is: %ld byte%s\n", sizeof(short), sizeof(short) == 1? "" : "s");
    printf("Minimum value for a signed short is: %d\n", -(short) ((unsigned short)(~0) >> 1) - 1);
    printf("Maximum value for a signed short is: %d\n\n", (short) ((unsigned short)(~0) >> 1));

    printf("Size of double is: %ld byte%s\n", sizeof(double), sizeof(double) == 1? "" : "s");
    printf("Minimum value for a signed double is: %.1lf\n", -(double) ((unsigned long)(~0) >> 1)- 1.0);
    printf("Maximum value for a signed double is: %.1lf\n\n", (double) ((unsigned long)(~0) >> 1)); // not correct. Should end with 7.

    printf("Size of long is: %ld bytes%s\n", sizeof(long), sizeof(long) == 1? "" : "s");
    printf("Minimum value for a signed int is: %ld\n", -(long) ((unsigned long)(~0) >> 1) - 1);
    printf("Maximum value for a signed int is: %ld\n\n", (long) ((unsigned long)(~0) >> 1));

    printf("Size of long int is: %ld\n", sizeof(long int));
    printf("Size of long double is: %ld\n", sizeof(long double)); // this is huuuggee 16 bytes!!
    printf("Size of long long is: %ld\n\n", sizeof(long long));

    printf("Size of unsigned char is: %ld byte\n", sizeof(charsize));
    printf("Maximum value for an unsigned char is: %u\n\n", (unsigned char)~0);

    printf("Size of unsigned short is: %ld byte%s\n", sizeof(short), sizeof(int) == 1? "" : "s");
    printf("Maximum value for an unsigned short is: %u\n\n", (unsigned short)~0);

    printf("Size of unsigned int is: %ld bytes\n", sizeof(intsize));
    printf("Maximum value for an unsigned int is: %u\n\n", (unsigned int)~0);

    printf("Size of unsigned long is: %ld bytes\n", sizeof(longsize));
    printf("Maximum value for an unsigned long is: %lu\n\n", (unsigned long)~0);

    // Implict conversion to decimal
    printf("This is an octal number: %o, in decimal: %d\n", octal_num, octal_num);
    printf("This is a hex number: 0x%x, in decimal: %d\n", hex_num, hex_num);
}