/*11. Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz.
 O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.*/

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

void soma(int **m)
{
    int j = 4;
    for (int i = 0; i < j; i++)
    {
        m[1][i] = m[0][i] + m[1][i];
    }
}

void mult(int **m)
{
    int j = 4;
    for (int i = 0; i < j; i++)
    {
        m[1][i] = m[0][i] * m[1][i];
    }
}

int main()
{
    int **matriz = criar_matriz();
    preencher(matriz);
    printf("\nMatriz normal \n");
    Print(matriz);
    printf("Resultado da soma das linhas:\n");
    soma(matriz);
    Print(matriz);
    printf("Resultado da multiplicacao das linhas: \n");
    mult(matriz);
    Print(matriz);
    return 0;
}