#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void Taylor(double *rank); /* Thread function */

#define T 10000000000

int main(int argc, char *argv[])
{
    double rank_r = 0.0;
    int thread_count;

    thread_count = strtol(argv[1], NULL, 10);

#pragma omp parallel num_threads(thread_count)
    Taylor(&rank_r);

    printf("\n Execution Time: %.4f\n", rank_r);

    return 0;
};

void Taylor(double *rank)
{
    long my_rank = omp_get_thread_num();

    int thread_count = omp_get_num_threads();

    int val = (my_rank * (T / thread_count)) + 1;

    int cond = val + (T / thread_count);

    double soma = 0.0;

    for (double i = val; i < cond; i++)
    {
        soma += 1 / i;
    }

#pragma omp critical
    *rank += soma;

    printf("\n Hello from thread %ld of %.3f ", my_rank, soma);
}