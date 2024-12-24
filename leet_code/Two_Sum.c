#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    int i,j;
    int *ret = (int*)malloc(2 * sizeof(int));

    if(ret == NULL || nums == NULL || numsSize < 2)
    {
        *returnSize = 0;
        return NULL;
    }

    for ( i = 0; i < numsSize; i++)
    {
        for ( j = i+1 ; j < numsSize ; j++)
        {
            if (nums[i] + nums[j] == target )
            {
                *returnSize = 2;
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
            
        }
        
    }
    
        *returnSize = 0;
        free(ret);
        return NULL;
     
}