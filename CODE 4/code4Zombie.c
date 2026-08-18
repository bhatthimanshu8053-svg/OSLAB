#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

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
        printf("Child Process is exiting...\n");
    }
    else
    {
        printf("Parent Process is sleeping...\n");
        sleep(20);

        printf("Parent Process completed\n");
    }

    return 0;
}
