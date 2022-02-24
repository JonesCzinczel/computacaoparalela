// 5. Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número.
// Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lin, col, tam;

    printf("\nMatrizes\n");
    printf("Insira a dimensao da matriz: \n");
    scanf("%d", &tam);

    int matriz[tam][tam];

    for (lin = 0; lin < tam; lin++)
    {
        printf("Valores para a linha %d.\n", lin + 1);
        for (col = 0; col < tam; col++)
        {
            scanf("%d", &matriz[lin][col]);
        }
    }
    Multi(lin, col, matriz[lin][col]);
    return 0;
}

int Multi(int lin, int col, int matriz[lin][col])
{

    printf("\nMultiplicao\n");
    char opcao;
    int pos;
    int num;

    printf("Deseja multiplicar linha ou coluna? (L/C): ");
    scanf(" %c", &opcao);

    if (opcao == 'L' || opcao == 'l')
    {
        printf("\nA linha a ser multiplicada - (de 1 a %d): ", lin);
        scanf("%d", &pos);

        printf("\nPor qual valor sera multiplicado: ");
        scanf("%d", &num);

        for (int i = 0; i < col; i++)
        {
            matriz[pos - 1][i] *= num;
            //  Ele não printa a multiplicação das opções, tentamos todas maneiras possíveis e impossíveis T.T
        }
    }

    if (opcao == 'C' || opcao == 'c')
    {
        printf("\nA linha a ser multiplicada - (de 1 a %d): ", col);
        scanf("%d", &pos);

        printf("\nPor qual valor sera multiplicado: ");
        scanf("%d", &num);

        for (int j = 0; j < lin; j++)
        {
            matriz[pos - 1][j] *= num;
            //  Ele não printa a multiplicação das opções, tentamos todas maneiras possíveis e impossíveis T.T
        }
    }
}