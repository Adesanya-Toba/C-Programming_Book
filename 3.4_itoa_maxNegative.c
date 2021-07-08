/** 
 * Ex. 3.4: itoa to handle the largest negative integer.
 * 
 * In the previous version, number = -2147483648 would fail at n =-n,because the max value of integer is 2147483647
 * 
 * Modifying itoa to handle these situations. 
 * ->   sign is stored as  the number itself, 
 * ->   absolute value of each digit is stored in the string and 
 * ->   while loop is tested not for 0
 * 
*/

#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define abs(x) ( (x) > 0 ? x :-(x) )
#define MAXLINE 1000

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

    sign = n;
    i = 0;

    do{
        /* generates digits in reverse order */
        s[i++] = abs(n % 10) + '0'; // absolute required because negative characters are added to '0' = 48, this would give a new character.
    }while ((n /= 10) != 0);

    // very smart!
    if (sign < 0)
        s[i++] = '-';
    
    s[i] = '\0';
    reverse(s); 
}

int main()
{
    int var = -2147483648;
    char str[MAXLINE];
    itoa(str, var);
    printf("%d as a string is: \"%s\"\n", var, str);
}