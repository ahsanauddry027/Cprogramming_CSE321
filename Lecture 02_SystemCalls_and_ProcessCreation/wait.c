#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
    #include <sys/wait.h>
#endif

int main()
{
    int pid, status;
    pid = fork();

    if (pid == -1)
    {
        printf("fork failed\n");
        exit(1);
    }

    if (pid == 0)
        printf("Child here!\n");
    else
    {
        wait(&status);
        printf("Well done kid!\n");
    }
    return 0;
}

