#include <stdio.h>
#include <stdlib.h>
int a;
int main(){
    int *p = &a;
    printf("%#X, %d\n", p, sizeof(int*));
    system("pause");
    return 0;
}