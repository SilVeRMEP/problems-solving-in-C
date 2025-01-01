#include <stdio.h>

int simpleArraySum(int ar_count, int* ar)
{

    if (ar == NULL) 
        return 0;

    int s = 0;

    for (int i = 0; i < ar_count; i++)
    {
        s += ar[i];
    }

    return s;
}
