/*10. Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], lin, col, mult, reserva, reserva2, e;
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

            printf("%d  ", a[i][j]);
            if (j == col - 1)
                printf("\n");
        }
    }

    printf("\n1-multiplicar linha\n2-multiplicar coluna\nselecione: ");
    scanf("%d", &e);

    if (e == 1)
    {
        printf("\nmultiplicador: ");
        scanf("%i", &mult);

        printf("seleciona a linha * %i: ", mult);
        scanf("%i", &reserva);
        printf("\n");

        for (int j = 0; j < lin; j++)
        {
            a[reserva - 1][j] *= mult;
        }

        printf("\nA Matriz: \n");
        for (int i = 0; i < lin; ++i)
        {
            for (int j = 0; j < col; ++j)
            {

                printf("%d  ", a[i][j]);
                if (j == col - 1)
                    printf("\n");
            }
        }
    }

    else if (e == 2)
    {
        printf("\nmultiplicador: ");
        scanf("%i", &mult);

        printf("seleciona a coluna * %i: ", mult);
        scanf("%i", &reserva);
        printf("\n");

        for (int j = 0; j < col; j++)
        {
            a[j][reserva - 1] *= mult;
        }

        printf("\nA Matriz: \n");
        for (int i = 0; i < lin; ++i)
        {
            for (int j = 0; j < col; ++j)
            {

                printf("%d  ", a[i][j]);
                if (j == col - 1)
                    printf("\n");
            }
        }
    }
}