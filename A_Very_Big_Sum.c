long aVeryBigSum(int ar_count, long* ar)
{
    long long s = 0;

    if (ar_count == 0 ) return s;

    for (int i = 0 ; i < ar_count ; i++)
    {
        s +=ar[i];
    }

    return s;

}