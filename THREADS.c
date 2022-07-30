#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
void *thread (void *var)
{
    sleep(1);
    printf("From thread\n");
    return NULL;
}
int main()
{
    pthread_t thread_id;
    printf("Before thread\n");
    pthread_create(&thread_id, NULL, thread, NULL);
    pthread_join(thread_id, NULL);
    printf("After thread\n");
    exit(0);
}
