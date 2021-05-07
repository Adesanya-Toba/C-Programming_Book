#include <stdio.h>

int bin_search(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high){
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid + 1;
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
    int size = sizeof(a) / sizeof(int);
    int var = 47;

    printf("size of arrary is: %d\n", size);
    printf("%d was found at index %d in the array\n", var, bin_search(var, a, size));
}