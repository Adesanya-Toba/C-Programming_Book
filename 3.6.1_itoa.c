/**
 *  itoa: convert n to characters in s
 * 
 * Note: that the '0' is actually 48 in decimal.
*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>

void reverse(char s[])
{
    int c, i, j;
    /**
     *  Using the comma (,) operator in between some expressions
     *  ensures the expressions are evaluated from left to right
     *  and the value of the result is of the type of the right operand.  
     *
     *  Commas used in function arguments and variable declarations
     *  do not guarantee left to right evaluation.
    */
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i], s[i] = s[j], s[j] = c;
    }
}

void itoa(char s[], int n)
{
    int i, sign;

    if ((sign = n) < 0) // record sign 
        n = -n; // make positive
    i = 0;
    do{
        /* generates digits in reverse order */
        s[i++] = n  % 10 + '0';
    }while ((n /= 10) > 0);

    // very smart!
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s); 
}

int main()
{
    int var = -2147483648;
    char str[10];
    itoa(str, var);
    printf("%d in string is: \"%s\"\n", var, str);

    int neg = -157;
    // printf("%d\n", neg % 10);
    printf("%d\n", ('0'));
}