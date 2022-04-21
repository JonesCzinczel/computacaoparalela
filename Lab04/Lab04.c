#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/wait.h>

int main()
{

    pid_t child_pid;
    int shm_id;

    shm_id = shmget(IPC_PRIVATE, 4 * sizeof(int), IPC_CREAT | 0663);

    if (shm_id < 0)
    {
        printf("Erro shmget\n");
    }

    int *valor = (int *)shmat(shm_id, NULL, 0);
    *valor = 1;
    printf("Var. compartilhada: %i\n", *valor);

    child_pid = fork();
    printf("Childpid: %i\n", child_pid);

    if (child_pid == 0)
    {
        *valor += 2;

        printf("Var. compartilhada - Filho: %i\n", *valor);
    }
    else
    {
        wait(NULL);
        *valor *= 4;

        printf("Var. compartilhada - Pai: %i\n", *valor);
    }

    return 0;
}