//2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
//Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:

#include <stdio.h>

int main()
{
    float n1, n2, n3, me;

    printf("Digite a primeira nota");
    scanf("%f", &n1);

    printf("Digite a segunda nota");
    scanf("%f", &n2);

    printf("Digite a terceira nota");
    scanf("%f", &n3);

    printf("Digite a media");
    scanf("%f", &me);

    float ma = (n1 + n2 + n3 + me) / 7;

    if (ma >= 9)
        printf("A\n");
    if (ma >= 7.5 && ma < 9)
        printf("B\n");
    if (ma >= 6 && ma < 7.5)
        printf("c\n");
    if (ma >= 4 && ma < 6)
        printf("d\n");
    if (ma < 4)
        printf("E\n");
}