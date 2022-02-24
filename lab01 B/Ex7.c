// 7. Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. O programa deve permitir que o usuário digite o nome de 3 pessoas e
// a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
    float peso;
};

/*void ImprimePessoa(Pessoa P)
{
    printf("Idade: %d  Peso: %f Altura: %f\n", P.idade, P.peso, P.altura);
}*/

// Cadastro dos dados da pessoa
struct Pessoa Dados()
{
    struct Pessoa P;

    printf("Qual o nome da pessoa: ");
    scanf("%s", P.nome);

    printf("Qual a idade da pessoa: ");
    scanf("%i", &P.idade);

    printf("Qual a altura da pessoa: ");
    scanf("%f", &P.altura);

    printf("Qual o peso da pessoa: ");
    scanf("%f", &P.peso);

    return P;
}

// Informações da pessoa
void VetorPessoa(struct Pessoa P)
{
    printf("\nNome: %s\n", P.nome);
    printf("Idade: %i\n", P.idade);
    printf("Altura: %.2f\n", P.altura);
    printf("Peso: %.2f\n", P.peso);
}

int main()
{
    struct Pessoa geral[3];

    struct Pessoa P_a;
    printf("Primeira pessoa: \n");
    P_a = Dados();
    geral[0] = P_a;

    struct Pessoa P_b;
    printf("\nSegunda pessoa: \n");
    P_b = Dados();
    geral[1] = P_b;

    struct Pessoa P_c;
    printf("\nTerceira pessoa: \n");
    P_c = Dados();
    geral[2] = P_c;

    printf("\nTodos as pessoas");
    VetorPessoa(geral[0]);
    VetorPessoa(geral[1]);
    VetorPessoa(geral[2]);

    return 0;
}