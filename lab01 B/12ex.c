/*12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a = 0;
    char str[100];
    char dado;

    printf("Escreva a palavra: ");
    gets(str);

    printf("Insira o caractere que deseja procurar: ");
    dado = getchar();

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == dado)
        {
            printf("A posicao do dado %c e %d\n", dado, i + 1);
            a = +1;
        }
    }

    if (a >= 1)
    {
        exit;
    }

    else if (a == 0)
    {
        printf("%c O dado nao foi encontrado", dado);
    }
}
