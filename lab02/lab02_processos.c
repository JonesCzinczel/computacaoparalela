#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(){

    pid_t pid;
    int i, n, j;
    printf ("Enter the number: ");
    scanf ("%d", &n);
    j = n;

//Verificar se o resultado está correto ele passa por uma sequencia de comparações
for (i = 1; j > 1; j = j - 1)
    {
        pid = fork();
//verifica se o valor de pid é menor que  zero, se for menor vai mostrar que o programa deu erro, se não ele vai para a proxima comparação.
        if (pid < 0)
        {
            printf("error to fork");
            exit(1);
        }

//verifica se é diferente de  zero, se o ("else if") for ele para a execução e sai do loop, se não ele vai para a proxima comparação.
        else if (pid != 0)
        {
            pid = wait(NULL);
            break;
        }
//imprimi o valor do pid pai e do filho e em seguida o fatorial
        else
        {
            printf("\nnew generated child node\n");
            printf("\nparent process = %d  \n", getpid());
            printf("child process= %d \n", getppid());
            i = i * j;
            if (j == 2)
                printf("\nThe factorial of %d is %d\n", n, i);
        }
    }
}
