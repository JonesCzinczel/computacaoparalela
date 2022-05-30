#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

double Taylor(double *rank, int thread_count); /* Thread function */

#define T 10000000000

int main(int argc, char *argv[])
{
    double rank_r = 0.0;
    int thread_count;

    thread_count = strtol(argv[1], NULL, 10);

    Taylor(&rank_r, thread_count);

    return 0;
};

double Taylor(double *rank, int thread_count)
{
    double soma = 0.0;

#pragma omp parallel for num_threads(thread_count) \
    reduction(+: soma)

    for (long int i = 1; i < T; i++)
    {
        soma += 1 / (double)i;
    }

    printf("Final Result: %.3f\n", soma);

    return 0;
}