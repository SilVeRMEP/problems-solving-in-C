#include <stdio.h>
#include <string.h>




int romanToInt(char* s)
{

    int R[256] = {0}, t = 0 , l = strlen(s);
    const char VR[] = "IVXLCDM";
    R['I'] = 1;
    R['V'] = 5;
    R['X'] = 10;
    R['L'] = 50;
    R['C'] = 100;
    R['D'] = 500;
    R['M'] = 1000;

    for (int i = 0 ; s[i] != '\0' ; i++)
    {
       if (strchr(VR,s[i]) == NULL) return -1;
       if (i >= 2 && s[i] == s[i - 1] && s[i] == s[i - 2] && s[i] == s[i - 3] ) return -1;
       if (i > 0 )
       {
        if((s[i - 1] == 'I' && !(s[i] == 'V' || s[i] == 'X')) || (s[i - 1] == 'X' && !(s[i] == 'L' || s[i] == 'C')) || (s[i - 1] == 'C' && !(s[i] == 'D' || s[i] == 'M'))) return -1;
       }
    }

    for (int i = 0 ; i < l ; i++)
    {
        if(i < l - 1 && R[s[i]] < R[s[i + 1]]) t -=R[s[i]];
        else t +=R[s[i]];
    }

    return t;
}