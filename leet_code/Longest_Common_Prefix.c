#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0) return "";

    static char PF[201];
    strcpy(PF , strs[0]);

    for (int i = 1 ; i < strsSize ; i++)
    {
        while (strncmp(PF , strs[i] , strlen(PF)) != 0 )
        {
            PF[strlen(PF) - 1] = '\0';
            if (strlen(PF) == 0) return "";
        }
    }

    return PF;

}