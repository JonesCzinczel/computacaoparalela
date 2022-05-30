// Aluno: Luan Lemos Tia: 32085109
// Aluno: Jones Czinczel Tia: 32089041

#include <stdio.h>

#define T 10000000000

int main(void)
{
    double soma = 0;

    for (double i = 1; i <= T; i++)
    {
        soma += (1 / i);
    }

    printf("Result: %.4f\n", soma);

    return 0;
}