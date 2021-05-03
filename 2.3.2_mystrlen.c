/* My version of strlen */
#include <stdio.h>

int mystrlen (char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

int main()
{
    char* text = "Hello";
    int len = mystrlen(text);
    printf("Length of your string is: %d\n", len);

}