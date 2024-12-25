#include <stdio.h>

int main()
{
    int T[50],n,S[50],j;

    printf("entre la taille de tableau :");
    scanf("%d",&n);

    for (int i = 0 ; i < n ; i++)
    {
       scanf("%d",&T[i]);
    }

    j = n - 1 ;

    for (int i = 0; i < n; i++)
    {
        S[i]=T[j];
        j--;
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        printf("%d",S[i]);
    }
    
    return 0;
    
}