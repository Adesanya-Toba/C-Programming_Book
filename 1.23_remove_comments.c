// Program to remove all comments in a C program
#include <stdio.h>

void remove_comments();

char buff[20];

int main()
{

    remove_comments();
    printf("I can't see comments: %s\n", buff);
}

// get a line, if you see // ignore everything after until the new line character
void remove_comments()
{
    int c, len;
    int flag;

    len = 0;
    while((c = getchar()) != EOF)
    {
        buff[len] = c;
        len++;

    }
    buff[len] = '\0';

    /* 
    *  Tiny searching algorithm that checks if the ith index and the next are 
    *  comment characters, if so delete everything from there till
    *  the new line character.
    */
    for (int i = 0; buff[i] != '\n'; i++){
        if (buff[i] == '/' && buff[i + 1]== '/'){
            buff[i] = '\0';
        }
        else if (buff[i] == '/' && buff[i + 1] == '*'){
            buff[i] = '\0';
        }
    }
}