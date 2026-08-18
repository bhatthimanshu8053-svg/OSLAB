#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

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
        printf("Child Process is running\n");
        sleep(2);
        printf("Child Process completed\n");
    }
    else
    {
        printf("Parent is waiting for child...\n");

        wait(NULL);

        printf("Parent Process continues after child completion\n");
    }

    return 0;
}
