/*6. Crie uma funcao capaz de criar a transposta de uma matriz. A matriz deve
ser lida de teclado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], transposta[10][10], lin, col;
    printf("Insira o numero de linhas: ");
    scanf("%d", &lin);

    printf("Insira o numero de colunas: ");
    scanf("%d", &col);

    printf("\nDigite as entradas da matriz\n");
    for (int i = 0; i < lin; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("Insira o elemento a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nA Matriz: \n");
    for (int i = 0; i < lin; ++i)
        for (int j = 0; j < col; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == col - 1)
                printf("\n");
        }

    for (int i = 0; i < lin; ++i)
        for (int j = 0; j < col; ++j)
        {
            transposta[j][i] = a[i][j];
        }

    printf("\nA Transposta:\n");
    for (int i = 0; i < col; ++i)
        for (int j = 0; j < lin; ++j)
        {
            printf("%d  ", transposta[i][j]);
            if (j == lin - 1)
                printf("\n");
        }
    return 0;
}