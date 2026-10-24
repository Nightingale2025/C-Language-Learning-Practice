#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    int *p =(int*)malloc(sizeof(int));

    if (p == NULL){
        printf("内存分配失败\n");
        return 1;
    }
    *p = 666;
    printf("借来的地址是: %p\n",p);
    printf("内容为:%d\n",*p);

    free(p);
    p = NULL;

    return 0;
}