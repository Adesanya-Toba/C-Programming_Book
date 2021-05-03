#include <stdio.h>

/*  Returns x with the n bits that begin at
*   position p set to the rightmost n bits of y, 
*   leaving the other bits unchanged.
*
*   i.e. copy the rightmost n bits of y into x, starting from position p
*   for n bits. For example, if x = 0100 0101, p = 2, n = 3, y = 0000 1000
*   the answer would be x = 0100 0000.
*/
unsigned setbits(unsigned x, int n, int p, unsigned y)
{
    x = x & ~(~(~0 << n) << p - n + 1); // ~ has a higher precedence than >> or <<
    y = y & ~((~0) << n);
    return x | (y << p - n + 1);
}

int main()
{
    printf("Set bits are: %u\n", setbits(69, 3, 4, 7));
}