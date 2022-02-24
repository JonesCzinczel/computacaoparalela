/*13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.*/

#include <stdio.h>
#include <stdlib.h>

void remover(char str[100], int indice)
{
    for (indice; indice < 100; indice++)
    {
        str[indice] = str[indice + 1];
    }
}

int main()
{
    char str[100];
    int indice;

    printf("Digite um texto de ate 100 palavras: ");
    fgets(str, 100, stdin);

    printf("Digite a posicao do caractere a ser removido: ");
    scanf("%i", &indice);

    remover(str, indice);
    printf("%s", str);
}