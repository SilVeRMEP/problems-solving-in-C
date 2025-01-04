#include <stdio.h>

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = 0;
    result[1] = 0;

    if (a_count != b_count)
    {
        *result_count = 0;
        return result;
    }

    for ( int i = 0 ; i < a_count ; i++)
    {
        if (a[i] > b[i]) result[0]++;
        if (a[i] < b[i]) result[1]++;
    }
    
    *result_count = 2;
    return result;

}