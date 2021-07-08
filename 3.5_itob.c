/** 
 * Ex. 3.5  itob(n,s,b) that converts the integer n into a base b character
 *          representation in the string s
*/

#include <stdio.h>
#include <string.h>

#define abs(x) ( (x) > 0 ? x :-(x) )
#define MAXLINE 1000

void reverse(char s[])
{
    int c, i, j;
   
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i], s[i] = s[j], s[j] = c;
    }
}

void itob(char *s, int n, int base)
{
    int i, sign, temp;

    sign = n;
    i = 0;

    do{
        /* generates digits in reverse order */
        temp = abs(n % base);
        
        /** 
         * Remember this conversion: to convert an integer in base 10
         * to it's corresponding ASCII character, use
         * 
         * ->       n + 'A' - 10      OR
         * ->       n + 'a' - 10
         * 
         * The number n, plus the first ASCII character you want, minus
         * base 10.
        */
        s[i++] = (temp > 9) ? temp + 'A' - 10: temp + '0';
    } while ((n /= base) != 0);

    // very smart!
    if (sign < 0)
        s[i++] = '-';
    
    s[i] = '\0';
    reverse(s); 
}

int main(void)
{
    int var = 123456789;
    char str[MAXLINE];
    int base = 16;

    itob(str, var, base);
    printf("%d as a string in base %d is: \"%s\"\n", var, base, str);
}