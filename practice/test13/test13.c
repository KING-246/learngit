#include <stdio.h>
int func(){
    // 也可以不赋初值 0，静态数据区的变量默认初始化为 0
    static int n = 0;
    // int n = 0;
    n++;
    printf("Function is called %d times.\n", n);
    return n;
}
int main(){
    int i, n = 0;
    for(i = 1; i<=5; i++){
        func();
        printf("n = %d\n", n);
    }
    printf("n = %d\n", n);
    return 0;
}