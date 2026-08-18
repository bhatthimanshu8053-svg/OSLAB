#include <stdio.h>
#include <unistd.h>

int main()
{
    int n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    pid_t pid = fork();

    if (pid < 0)
    {
        printf("Fork failed\n");
    }
    else if (pid == 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                oddSum += i;
        }

        printf("Child Process\n");
        printf("Sum of Odd Numbers = %d\n", oddSum);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                evenSum += i;
        }

        printf("Parent Process\n");
        printf("Sum of Even Numbers = %d\n", evenSum);
    }

    return 0;
}
