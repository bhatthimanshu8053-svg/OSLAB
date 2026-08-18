#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid;

    pid = fork();

    if (pid < 0)
    {
        printf("Fork failed\n");
    }
    else if (pid == 0)
    {
        printf("Child Process\n");
        sleep(5);

        printf("Child PID = %d\n", getpid());
        printf("Parent PID = %d\n", getppid());
        printf("Child has become an Orphan Process\n");
    }
    else
    {
        printf("Parent Process\n");
        printf("Parent is exiting...\n");
    }

    return 0;
}
