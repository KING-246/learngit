#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("C language Chinese net\n");
    fflush(stdout);  //本次输出结束后立即清空缓冲区
    sleep(5);
    printf("http://c.biancheng.net\n");
    puts("fail to open the file\n");
   
    return 0;
}