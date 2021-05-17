/*  
*   Binary search 
*   Finds numbers in a sorted array by searching the respective
*   half array based on the value being searched for.
*
*   I prefer this one.
*/
#include <stdio.h>
#include <time.h>

int bin_search(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high){
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else // found match
            return mid;
    }
    return -1;
}

int main()
{
    int a[] = {20, 22, 29, 32, 47, 52, 98};
    int size = sizeof a / sizeof(int);
    int var = 20, result;

    clock_t start, end;
    double time_used;

    printf("size of arrary is: %d\n", size);

    start = clock();
    scanf("%d", &var);
    result = bin_search(var, a, size);
    end = clock();

    printf("%d was found at index %d in the array\n", var, result);

    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to find %d was: %f seconds\n", var, time_used);
}
