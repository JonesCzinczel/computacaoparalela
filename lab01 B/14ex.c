/*14. Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.*/

#include <stdio.h>
#include <stdlib.h>

void adcionar(char str[100], char palavra, int indice)
{
    for (int i = 0; i <= 100; i++)
    {
        str[i] = str[i + 1];
        if (i == indice)
        {
            str[indice] = palavra;
            break;
        }
    }
}

int main()
{
    char str[100];
    char palavra;
    int indice;

    printf("Digite um texto de ate 100 palavras: ");
    fgets(str, 100, stdin);

    printf("Digite a palavra que deseja inserir: ");
    palavra = getchar();

    printf("Digite a posicao da palavra a ser inserida: ");
    scanf("%i", &indice);

    adcionar(str, palavra, indice);
    printf("%s", str);
}