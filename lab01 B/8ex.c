/* 8. Crie uma função capaz de criar a transposta de uma matriz.*/

#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 4

int **criar_matriz()
{
    int i;
    int **m = (int **)malloc(M * sizeof(int));
    if (m == NULL)
    {
        return 0;
    }

    for (i = 0; i < M; i++)
    {
        m[i] = (int **)malloc(N * sizeof(int));
        if (m == NULL)
        {
            return 0;
        }
    }

    return m;
}

void preencher(int **m)
{
    int i, j;

    srand(time(NULL));

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            m[i][j] = rand() % 50;
        }
    }
}

void Print(int **m)
{
    int i, j;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int **transposta(int **m)
{
    int **ma = criar_matriz();
    int i, j;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            ma[i][j] = m[j][i];
        }
    }
    return ma;
}

int main()
{
    int **matriz = criar_matriz();
    preencher(matriz);
    printf("\nMatriz normal \n");
    Print(matriz);
    matriz = transposta(matriz);
    printf("Matriz transposta \n");
    Print(matriz);
    return 0;
}