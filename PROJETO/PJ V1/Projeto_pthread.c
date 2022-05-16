// Aluno: Luan Lemos Tia: 32085109
// Aluno: Jones Czinczel Tia: 32089041

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <time.h>

int thread_count;

void *Taylor(void *rank); /* Thread function */

int T = 100;
double sum = 0;

int main(int argc, char *argv[])
{
    clock_t t;

    long thread;
    pthread_t *thread_handles;

    thread_count = strtol(argv[1], NULL, 10);
    thread_handles = malloc(thread_count * sizeof(pthread_t));

    t = clock();

    for (thread = 0; thread < thread_count; thread++)
    {
        pthread_create(&thread_handles[thread], NULL, Taylor, (void *)thread);
    }

    for (thread = 0; thread < thread_count; thread++)
    {
        pthread_join(thread_handles[thread], NULL);
    }

    free(thread_handles);

    t = clock() - t;

    printf("Execution Time w/ 2 parallel threads: %lf\n", ((double)t) / ((CLOCKS_PER_SEC / 1000)));
    return 0;
}

void *Taylor(void *rank)
{
    long my_rank = (long)rank;
    int thread_partition = (T / thread_count);
    int num = (my_rank * thread_partition) + 1;
    int finnum = (num + thread_partition);

    for (double i = num; i < finnum; i++)
    {
        sum += 1 / i;
    }

    printf("\n Hello from thread %ld of %.3f - sum of Taylor - ", my_rank, sum);

    return NULL;
}