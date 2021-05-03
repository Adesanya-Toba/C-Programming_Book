#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}point;

typedef struct 
{
   point pt1;
   point pt2;
}rect;

point test;


int main ()
{
    point *help = (point*)malloc(sizeof(point));
    test.x = 30;
    test.y = 90;
    help->x = 40;
    help->y = 26;

    int8_t num;
    scanf("%hhd",&num);
    printf("Is this your number: %d\n", num);

    printf("%d\n", test.x);
    printf("%d\n", help->x);
    printf("%d\n", help->y);
    printf("%d\n", test.y);

}