/*  Ex. 2.10
*   lower function with conditional expressions
*/
#include <stdio.h>

/*  ASCII code 
*   'A' = 65, 'Z' = 90
*   'a' = 97, 'z' = 122
*
*/

/* Using MACRO definitions */
#define LOWER(X)  (X >= 'A' && X <= 'Z') ? X - 'A' + 'a' : (X);
int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a': c;
}

int main()
{
    int var = 'G';
    printf("Lower case of %c is %c\n", var, lower(var));

    int res = LOWER(var);
    printf("Lower case of %c (using MACRO's) is %c\n", var, res);
}