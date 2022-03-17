// Luan Lemos
// 32085109

// Jones Czinczel
// 32085109

// Exercicio: Escreva um programa que leia um arquivo texto com o nome, a idade e a altura de um conjunto de pessoa.

#include <stdio.h>
//#include <cstdlib>
#include <stdlib.h>

typedef struct
{
    char name[10];
    int age;
    float height;
} PESSOA;

PESSOA leDadosUmaPessoa(FILE *Arq)
{
    PESSOA i;

    fscanf(Arq, "%s\n", &i.name);
    fscanf(Arq, "%d\n", &i.age);
    fscanf(Arq, "%f\n", &i.height);
    return i;
}

void imprimeVetor(PESSOA povo[10], int i)
{
    for (int j = 0; j < i; j++)
    {
        printf("\nNome: %s", povo[j].name);
        printf("\nIdade: %d", povo[j].age);
        printf("\nAltura: %.2f\n", povo[j].height);
    }
}

int ordem(const void *p1, const void *p2)
{
    if ((*(PESSOA *)p1).height == ((*(PESSOA *)p2).height))
        return 0;

    else if ((*(PESSOA *)p1).height < ((*(PESSOA *)p2).height))
        return 0;

    else
        return 0;
}

void ordenaVetor(PESSOA *Povo, int i)
{
    qsort(Povo, i, sizeof(PESSOA), ordem);
}

FILE *Arq;
FILE *abreArquivoAEntrada(char S1[50])
{
    FILE *Arq = fopen(S1, "rt");
    return Arq;
}

void fechaArquivo(FILE *Arq)
{
    fclose(Arq);
}

int main()
{
    char S1[50] = "03Lab.txt";
    PESSOA Povo[10], P;
    FILE *Arq = abreArquivoAEntrada(S1);
    int i = 0;

    if (abreArquivoAEntrada(S1) != NULL)
    {
        while (!feof(Arq))
        {
            P = leDadosUmaPessoa(Arq);
            Povo[i] = P;
            i++;
        }
        fechaArquivo(Arq);
        ordenaVetor(Povo, i);
        imprimeVetor(Povo, i);
    }

    else
        printf("Erro na abertura do arquivo");

    return 0;
}