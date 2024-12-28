#include <stdio.h>
#include <string.h>


int romanToInt(char* s)
{

    int R[256] = {0}, t = 0 , l = strlen(s);

    R['I'] = 1;
    R['V'] = 5;
    R['X'] = 10;
    R['L'] = 50;
    R['C'] = 100;
    R['D'] = 500;
    R['M'] = 1000;


    for (int i = 0 ; i < l ; i++)
    {
        if(i < l - 1 && R[s[i]] < R[s[i + 1]]) t -=R[s[i]];
        else t +=R[s[i]]
    }

    return t;
    
}

