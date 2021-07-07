/** 
 *   A function to expand short hand notations like a-z in string s1
 *   into the equivalent complete list (abcdefghi...xyz) in s2
 *   
 *   Also allow for either case and digits.
 *
 *   This is better, more modular (atomic).
*/

#include <stdio.h>
#include <string.h>

#define MAXLINE 30

void escape(char* s1, char* s2)
{
    int i, j, c;

    i = j = 0;

    while((c = s1[i++]) != '\0'){
        if(s1[i] == '-' && s1[i+1] >= c)
        {
            i++;
            while(c < s1[i]){
                s2[j++] = c++;
            }
        }
        else
        {
            s2[j++] = c;
        }
    }
    s2[j] = '\0';
    
}

void my_getline(char *s)
{
    int i, c = 0;

    for (i = 0; i < MAXLINE && ((c = getchar()) != EOF) && c != '\n'; i++)
    {
        s[i] = c;
    }

    // if(c=='\n')
    //     s[i++]=c;
    
    s[i] = '\0';
}


int main(void)
{
    char s1[MAXLINE];
    char s2[MAXLINE];

    my_getline(s1);
    escape(s1, s2);
    printf("Original: %s\n\n", s1);
    printf("Here's your complete sequence: %s\n", s2);
}
