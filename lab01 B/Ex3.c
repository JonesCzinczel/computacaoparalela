//3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). 
//Este número deve ser sempre ímpar.

int main(void)
{

    int n, i, j;

    printf("Digite o numero maximo do triangulo. O número deve ser impar:\n");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 == 0)
    {
        printf("Numero invalido.\n");
        return 1;
    }
    else
    {
        printf ("Resultado:\n");
        for (i = 0; i <= (n / 2) + 1; i++)
        {
            for (j = i + 1; j <= n - i; j++)
            {
                printf("%d ", j);
            }

            printf("\n");

            for (j = 0; j < (i + 1) * 2; j++)
                printf(" ");
        }
    }

    return 0;
}