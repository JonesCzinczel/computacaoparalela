// Aluno: Luan Lemos Tia: 32085109
// Aluno: Jones Czinczel Tia: 32089041

#include <stdio.h>

#define T 10000000

int main(void)
{
    double sum = 0;

    for (double i = 1; i <= T; i++)
    {
        sum += (1 / i);
    }

    printf("Result: %.4f\n", sum);

    return 0;
}