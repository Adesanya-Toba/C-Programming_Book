/*  
*   Binary Search 
*   which performs only one check inside the loop
*/
#include <stdio.h>

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
    int arr[] = {2, 4, 6, 7, 9, 29, 45};
    int var = 45;

    printf("%d is at index: %d\n", var, binsearch(var, arr, sizeof arr/ sizeof(int)));
    return 0;
}

