#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// The function.

void calculate_the_maximum(int n, int k)
{
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((i & j) < k)
            {
                if (max_and < (i & j))
                {
                    max_and = i & j;
                }
            }
            if ((i | j) < k)
            {
                if (max_or < (i | j))
                {
                    max_or = i | j;
                }
            }
            if ((i ^ j) < k)
            {
                if (max_xor < (i ^ j))
                {
                    max_xor = i ^ j;
                }
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
