#include <stdio.h>

/*  Invert n bits of x from position p 
*   So if x = 0000 1000, p = 4, n = 3, 
*   i.e. the next 3 bits from position 4.
*   
*   The inverted bits would be x = 0000 0110
*/
unsigned my_invert(unsigned x, int p, int n)
{
    return x  ^ ~(~0 << n) << (p - n);
}


// Trusty binary converter function
long bin_conv(int dec_num)
{
    int rem = 0, multiplier = 1;
    long bin_num = 0;
    while (dec_num != 0)
    {
        rem = dec_num % 2;
        dec_num = dec_num / 2;
        bin_num += rem * multiplier;
        multiplier *= 10;
    }
    return bin_num;
}

int main()
{
    unsigned inv_num;
    inv_num = my_invert(8, 4, 3);
    printf("Inverted number is: %u\n", (unsigned)(inv_num));

    printf("In binary: %ld\n", bin_conv(inv_num));
}
