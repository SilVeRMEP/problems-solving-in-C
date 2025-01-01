#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize)
{

    char *r = malloc(sizeof( strsSize * char ));

    qsort(strs , strlen(strs) ,sizeof(char));

    for(int i = 0 ; i <strlen(strs) ; i++)
    {
        if (strs[i] == strs[i + 1])
        {
            r = strs[i]
            trsSize = strlen(r)
            return r;
            
        } 
    } 
    
    free(r);
    trsSize = 0;
    return 0;

    
}