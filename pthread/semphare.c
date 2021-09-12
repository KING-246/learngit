#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

int num = 5;
sem_t sem ;

void* get_servere(void* arg)
{
    int id = *((int*)arg);
    if(0 == sem_wait(&sem))
    {
        printf("---customer%d 正在办理业务\n", id);
        sleep(2);
        printf("---customer%d 已办完业务\n", id);
        sem_post(&sem);
    }
    return 0;
}

int main()
{
    int flag,i,j;
    pthread_t customer[5];
    sem_init(&sem,0,1);

    for(i=0;i<num;i++)
    {
        flag = pthread_create(&customer[i],NULL,get_servere,&i);
        if(flag!=0)
        {
            printf("---customer%d 已办完业务\n", id);
            return 0;
        }
        else
        {
            printf("customer%d 来办理业务\n",i);
        }
        sleep(1);
    }

    for(j=0;j<num;j++)
    {
        flag=pthread_join(&cunstomer[j],NULL);
        if(flag!=0)
        {
            printf("tid=%d 等待失败！", customer[i]);
            return 0;
        }

    }

    sem_destroy(&sem);
    return 0;
}