#include <stdio.h>

int main()
{
    int c;
    printf("Type in the stream you want printed: ");
    while ((c = getchar()) != EOF)
    {
       putchar(c);
       printf("\n"); // Now I understand how getchar works.
    }

    c = getchar() != EOF;
    putchar(c);
    printf("%i\n",EOF);
}
