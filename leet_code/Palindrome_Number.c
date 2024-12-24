#include <stdio.h>

bool isPalindrome(int x)
{
    int n, d = 1, c = 0;

    if( x < 0 ) return false;

    while (x >= d *10)
    {
        d *= 10;
        c++;
        if (x == d) return false; break;
    }

    d = d / 10;
    c = c -1 ;

    do
    { 
        if(x % 10 == x / d)
        {
            x = (x / d) % 10;
            d = d / 100;
            if
            {
                x <=10;   
                return true;
                break;
            }
        }
    
    } while (x >= 10);

    return false;
}