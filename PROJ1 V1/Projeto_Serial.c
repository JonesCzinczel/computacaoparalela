// Aluno: Luan Lemos Tia: 32085109
// Aluno: Jones Czinczel Tia: 32089041

#include <stdio.h>
#include <time.h>

int main(void)
{
    float sum = 0;
    clock_t t;

    int T = 100;
    t = clock();

    for (float i = 1; i <= T; i++)
    {
        sum += (1 / i);
    }

    printf("Result: %.2f\n", sum);

    t = clock() - t;

    printf("Execution Time: %lf", ((double)t) / ((CLOCKS_PER_SEC / 1000)));

    return 0;
}