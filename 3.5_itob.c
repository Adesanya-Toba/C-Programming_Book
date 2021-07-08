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
    int i, sign;

    sign = n;
    i = 0;

    do{
        /* generates digits in reverse order */
        s[i++] = abs(n % base) + '0'; // absolute required because negative characters are added to '0' = 48, this would give a new character.
    } while ((n /= base) != 0);

    // very smart!
    if (sign < 0)
        s[i++] = '-';
    
    s[i] = '\0';
    reverse(s); 
}

int main(void)
{
    int var = 200;
    char str[MAXLINE];
    int base = 16;

    itob(str, var, base);
    printf("%d as a string in base %d is: \"%s\"\n", var, base, str);
}