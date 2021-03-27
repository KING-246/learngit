#include <stdio.h>
int main(){
    char *str[4] = {
        "c.biancheng.net",
        "C语言中文网",
        "劳资是最帅的",
        "C Language"
    };
    printf("%s\n%s\n%s\n%s\n", str[0], str[1], str[2], str[3]);
    return 0;
}