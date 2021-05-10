/*  Converts strings to integers
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myatoi(char *s)
{
    int i = 0, num = 0;
    int size = strlen(s);

    for (i = 0; i < size; i++)
    {
        if (s[i] >= '0' && s[i] <= '9') // only works in this range
        {
            /*  operator precedence rocks!! 
            *   You see that this only works because 
            *   * is higher in precedence than +
            */
            num = 10 * num + (s[i] - '0'); // converts to numeric digit by removing the '0' char
        }
        else
        {
            return 0;
        }
    }
    return num;
}

int main()
{
    char *var = (char*)malloc(sizeof(char));
    printf("Enter digit to convert: ");
    scanf("%s", var);
    printf("\"%s\" in digits is: %d\n", var, myatoi(var));

    free(var);
}