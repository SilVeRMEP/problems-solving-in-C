#include <stdio.h>

bool isPalindrome(int x)
{
    int d = 1;

    while (x / d >= 10)
    {
        d *= 10;
    }

    if(x < 0 ) return false;

    do
    {
        int last = x / d;
        int first = x % 10;

        if (first != last)
        {
            return false;
        }

        x = (x % d) / 10;
        d /= 100;


    } while (x > 0);

    return true;
}