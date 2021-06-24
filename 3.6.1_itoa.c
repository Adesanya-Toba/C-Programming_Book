/*  itoa: convert n to characters in s  */
#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int c, i, j;
    /*  Using the comma (,) operator in between some expressions
    *   ensures the expressions are evaluated from left to right
    *   and the value of the result is of the type of the right operand.  
    *
    *   Commas used in function arguments and variable declarations
    *   do not guarantee left to right evaluation.
    */
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i], s[i] = s[j], s[j] = c;
    }
}

void itoa(int n, char s[])
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
    int var = -256;
    char str[10];
    itoa(var, str);
    printf("%d in string is: \"%s\"\n", var, str);
}