#include <stdio.h>
#include <time.h>

int main(void)
{
    float soma = 0;
    clock_t t;

    int T = 100;
    t = clock();

    for (float i = 1; i <= T; i++)
    {
        soma += (1 / i);
    }

    printf("Result: %.2f\n", soma);

    t = clock() - t;

    printf("Execution Time: %lf", ((double)t) / ((CLOCKS_PER_SEC / 1000)));

    return 0;
}