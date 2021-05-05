#include <stdio.h>
#include <ctype.h> // family of functions that provide tests and conversions that independent of of character set.
#include <math.h>
#include <stdlib.h>

/*  ASCII code 
*   'A' = 65, 'Z' = 90
*   'a' = 97, 'z' = 122
*
*/
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        printf("here\n");
        return c;
}

int main()
{
    int var = 'G';
    printf("Lower case of %c is %c\n", var, lower(var));
    printf("From <ctype.h>, tolower(%c) is: %c\n", var, tolower(var)); // From <ctype.h>
    isdigit(var);

    int root = 6;
    printf("Square root of %d is: %.2f\n", root, sqrt(root));

    int rand = 5;
    srand(rand);
    printf("%d\n", rand);
}
