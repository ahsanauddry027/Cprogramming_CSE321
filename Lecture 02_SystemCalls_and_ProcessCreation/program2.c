#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    printf("Program-2 Running...\n");

    pid_t pid = fork();
    int status;

    if (pid == 0)
        execl("./program1", "program1", "a", "b", "c", "d", NULL);
    else
    {
        wait(&status);
        execl("/bin/pwd", "pwd", NULL);
    }
}

