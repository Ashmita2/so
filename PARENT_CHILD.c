#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
pid_t child=fork();
if( child == 0)
{
printf("hello from child %d",getpid());

}
if(child!=0)
{
printf("hello from parent %d",getppid());
}
}
