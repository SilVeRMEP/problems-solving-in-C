#include <stdio.h>
#include <string.h>


int max_c_black_cells(char MA[100][100], int R, int C)
{
    int M_B = 0;

    for (int i = 0; i < R; i++)
    {
        int CO = 0;
        for (int j = 0; j < C; j++)
        {
            if (MA[i][j] == '#')
            {
                CO++;
            }
            
            else
            {
                if (CO > M_B)
                {
                    M_B = CO;
                }
                CO = 0;
            }
        }

        if (CO > M_B)
        {
            M_B = CO;
        }
    }

    for (int j = 0; j < C; j++)
    {
        int CO = 0;
        for (int i = 0; i < R; i++)
        {
            if (MA[i][j] == '#')
            {
                CO++;
            }
            
            else
            {
                if (CO > M_B)
                {
                    M_B = CO;
                }
                CO = 0;
            }
        }
        if (CO > M_B)
        {
            M_B = CO;
        }
    }

    return M_B;
}

int main()
{
    int T;
    scanf("%d", &T);
    
    while (T--)
    {
        int R, C;
        scanf("%d %d", &R, &C);
        
        char MA[100][100];
        
        for (int i = 0; i < R; i++)
        {
            scanf("%s", MA[i]);
        }
        
        int result = max_c_black_cells(MA, R, C);
        printf("%d\n", result);
    }
    
    return 0;
}
