/**
 *  A function to expand short hand notations like a-z in string s1
 *  into the equivalent complete list (abcdefghi...xyz) in s2
 *  
 *   Also allow for either case and digits.
*/
#include <stdio.h>
#include <string.h>

#define CASE(y, a) for(i = 0, j = y; i <= a; i++) \
                        { s2[i] = j + i; }

// Testing out a function pointer
typedef int (*myfunc_t)(char*, char*); // Not tested yet

void escape(char* s1, char* s2)
{
    char* temp;
    int i, j;

    if (s1 == "a-z"){
        CASE('a', 'z'-'a')
        // for(i = 0, j = 'a'; i <= 'z' - 'a'; i++)
        // {
        //     s2[i] = j + i;
        // }
    }
    else if (s1 == "0-9")
    {
        CASE('0', '9'-'0')
        // for(i = 0, j = '0'; i <= '9' - '0'; i++)
        // {
        //     s2[i] = j + i;
        // }
    }
    else if(s1 == "A-Z")
    {
        CASE('A', 'Z'-'A')
    }

    s2[i] = '\0';
    // scanf("%[^\n]%*c", s1);
}

int main(void)
{
    char* s1 = "a-z";
    char s2[30];
    char s3[50];

    escape(s1, s2);
    printf("Original: %s\n\n", s1);
    printf("Here's your complete sequence: %s\n", s2);

    scanf("%[^\n]%*c", s3); // this works
    printf("%s\n", s3);
    memset(s3, '\0', sizeof s3);

    // getline();
    printf("%s\n", s3);
}