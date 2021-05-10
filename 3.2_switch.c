/*  Ex. 3.2
*   Switch statements to replace newline and tab characters
*   with their visual equivalent (\n, \t), as it copies a string.
*/

#include <stdio.h>

#define MAXLINE 1000
/*  Converts characters like newline and tab into
*   visible escape sequences like \n and \t 
*   as it copies the string src into dst.
*/
void print_escape(char* dst, char* src)
{
    int i = 0, j = 0;

    while (src[i] != '\0'){
        switch (src[i]){
            case '\t':
                dst[j++] = '\\';
                dst[j++] = 't';
                break;
            case '\n':
                dst[j++] = '\\';
                dst[j++] = 'n';
                break;
            default:
                dst[j++] = src[i];
                break;
        }
        i++;
    }
    dst[j] = '\0';
}

void my_getline(char *s)
{
    int i, c = 0;

    for (i = 0; i < MAXLINE && ((c = getchar()) != EOF); i++)
    {
        s[i] = c;
    }
    s[i] = '\0';
}


int main()
{
    char s[MAXLINE];
    char d[MAXLINE];

    my_getline(s);
    print_escape(d, s);
    printf("Original s: %s\n", s);
    printf("This is d: %s\n", d);
}