#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
    int pid = fork();
    if(pid > 0)
        {
            printf("In parent process: %d\n", getpid());
            sleep(3);
        }
    else if(pid == 0)
        {
            printf("In child process: %d\n", getpid());
            printf("In parent process: %d\n", getppid());
            sleep(3);
            printf("In child process: %d\n", getpid());
            printf("In parent process: %d\n", getppid());
        }
        
}
