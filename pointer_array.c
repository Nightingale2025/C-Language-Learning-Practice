#include <stdio.h>
#include <windows.h>
#include <string.h>
int main() {
    SetConsoleOutputCP(65001);

    char *name[5] = {"张三", "李四", "王五", "赵六", "孙七"};
    
    printf("下标遍历:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", name[i]);
    }
    printf("\n指针遍历:\n");
    for (int i = 0; i < 5; i++){
        printf("%s\n", *(name + i));
    }
    return 0;
}