/*9 Crie uma função capaz de substituir todos os números negativos
de uma matriz por seu módulo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], lin, col;
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
    {
        for (int j = 0; j < col; ++j)
        {
            if (a[i][j] < 0)
            {
                a[i][j] *= (-1);
                printf("%d  ", a[i][j]);
                if (j == col - 1)
                    printf("\n");
            }
            else
            {
                printf("%d  ", a[i][j]);
                if (j == col - 1)
                    printf("\n");
            }
        }
    }
    return 0;
}