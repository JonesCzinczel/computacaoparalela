//4. Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. 
//Faça isto com string de C e de C++

#include <stdio.h>
#include <string.h>

void ordem();
int main()
{
    char nome1[30], nome2[30];
    printf("Informe o primeiro nome:\n");
    gets(nome1);

    printf("Informe o segundo nome:\n");
    gets(nome2);

    ordem(nome1, nome2);
    return 0;
}

void ordem(char a[30], char b[30])
{
    if (strcmp(a, b) < 0)
        printf("A ordem e:\n %s.\n %s.\n", a, b);
    else
        printf("A ordem e:\n %s.\n %s.\n", b, a);
}