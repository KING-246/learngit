#include <stdio.h>
__attribute__((weak)) extern int a;
__attribute__((weak)) extern void func();
int main(){
    printf("&a: %d, func: %d\n", &a, func);
    if(&a){
        printf("a = %d\n", a);
    }else{
        printf("a is undefined!\n");
    }
    if(func){
        func();
    }else{
        printf("func() is undefined!\n");
    }
    return 0;
}