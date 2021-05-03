#include <stdio.h>

/* Count digits, white space and others */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10] ={0};

    nwhite = nother = 0;
    
    printf("Enter a stream of characters and numbers: ");
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0']; // this is really cool. Essentially converts a character to the equivalent int!
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("Digits = ");
    for (i =0; i < 10; ++i)
        printf("%d ", ndigit[i]);
    printf(", white space = %d, text = %d\n", nwhite, nother);
    
}