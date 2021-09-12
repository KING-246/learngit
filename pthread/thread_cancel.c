#include<stdio.h>
#include<unistd.h>
#include <pthread.h>
#include <stdlib.h>

int* ThreadFun(void* arg)
{
    printf("new thread working\n");
}

int main()
{
    pthread_t myThread;
    void* mess;
    int value; 
    int res;

    res=pthread_create(&myThread,NULL,ThreadFun,NULL);
    if(res!=0)
    {
        printf("build thread failed!\n");
        return 0;
    }
    sleep(3);

    res=pthread_canel(myThread);
    if(res!=0)
    {
        printf("cancel thread failed!");
        return 0;
    }

    res=pthread_join(myThread,&mess);
    if(res!=0)
    {
        printf("wait thread failed!");
        return 0;
    }

    if (mess == PTHREAD_CANCELED) 
    {
        printf("thread wad stopped force!\n");
    }
    else
    {
        printf("error!\n");
    }
    return 0;

}




