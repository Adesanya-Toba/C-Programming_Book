/**
*   Static local (automatic) variables have the ability 
*   to hold on to their value across multiple fucntion calls
*
*   This is a program to test that out.
*/
#include <stdio.h>

int updateInt(void);

int main (void)
{
    // Testing static local variables
    printf("%d\n", updateInt());
    printf("%d\n", updateInt());
    printf("%d\n", updateInt());

}

int updateInt(void)
{
    // static automatic variables can apparently hold thier value across multiple function invocations
    static int hold = 0;

    hold++;
    return hold;
}