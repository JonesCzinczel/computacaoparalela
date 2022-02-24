/*1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int k, i, j, result, linha = 1;

    printf("Digite a dimensao da matriz quadrada\n");
    scanf("%d", &k);

    int a[k][k];

    for (i = 0; i < k; i++)
    {
        printf("Digite os valores para a %d linha\n", i + 1);
        for (j = 0; j < k; j++)
            scanf("%d", &a[i][j]);

        result = a[0][0];
    }
    printf("A matriz digitada: \n");
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < k; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (a[i][j] < result)
            {
                result = a[i][j];
                linha = i + 1;
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n O menor valor: %d\n", result);
    system("pause");
}
