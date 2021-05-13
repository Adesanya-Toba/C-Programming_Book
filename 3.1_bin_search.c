/*  
*   Binary Search 
*   which performs only one check inside the loop
*/
#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    mid = (low + high) / 2;
    while (low < high && x != v[mid]){
        if (x > v[mid])
            low = mid + 1;
        else 
            high = mid - 1;
        
        mid = (low + high) / 2;
    }

    if(x == v[mid])
        return mid;
    else
        return -1;
}


int main(void)
{
    int arr[] = {2, 4, 6, 7, 9, 29, 45, 47, 49, 50, 53, 57, 62, 69, 75, 84};
    int var = 2, result;
    //clock_t start, end;
    double time_used = 0.0;

    //start = clock();
    time_t start = time(NULL);
    scanf("%d", &var);
    result = binsearch(var, arr, sizeof arr / sizeof(int));
    //end = clock();
    time_t end = time(NULL);

    printf("%d was found at index %d in the array\n", var, result);

    //time_used = (double)(end - start);
    printf("Time taken to find %d was: %f seconds\n", var, (double)end - start);
    return 0;
}

