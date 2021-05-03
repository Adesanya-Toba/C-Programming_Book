#include <stdio.h>

#define UPPER 300   /* Upper limit of table */
#define LOWER 0     /* Lower limit of table */
#define STEP 20     /* Step size */

int main()
{
    float fahr, celcius;
    float lower, upper, step;
    char* far = "Farenheit", *cel = "Celcius";

    int fahr1 = 0;
    printf("%9s %8s\n", far, cel);
    for (fahr1 = UPPER; fahr1 >= LOWER; fahr1-= STEP)
    {
        celcius = (5.0/9.0) * (fahr1 - 32.0);
        printf("%3.0d %12.1f\n", fahr1, (celcius)); // the 7 here right justifies the values to fixed field of 7 digits, so the table looks better
    }
//     while(fahr <= upper){
//         celcius = (5.0/9.0) * (fahr - 32.0);
//         printf("%3.0f %12.1f\n", fahr, celcius); // the 7 here right justifies the values to fixed field of 7 digits, so the table looks better
//         fahr = fahr + step;       
//     }
}
