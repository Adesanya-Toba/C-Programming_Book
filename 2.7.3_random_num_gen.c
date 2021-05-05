#include <stdio.h>
#include <stdlib.h>

unsigned long int next = 1;

/*  rand: returns pseudo-random integer in 0..32767 */
int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed)
{
    next = seed;
}

int main()
{
    int var = 2;
    srand(var);
    printf("Random number for %d is %d\n", var, rand());
}