#include <stdio.h>
#include <stdlib.h>
int a = 2, c = 255;
int main(){
    int *pa = &a;
    printf("pa = %#X, &b = %#X\n", pa, &c);
    system("pause");
    return 0;
}
