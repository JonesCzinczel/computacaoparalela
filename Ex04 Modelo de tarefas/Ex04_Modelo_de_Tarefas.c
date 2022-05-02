// Luan Lemos - 32085109
// Jones Czinczel - 32089041

#include <stdio.h>

int main(void)
{
    int T = 10;
    float sum = 0;

    for (float i = 1; i <= T; i++)
    {
        sum += (1 / i);
    }
    printf("Solução\n");
    printf("ln(%d) = %.3f\n", T, sum);
    return 0;
}