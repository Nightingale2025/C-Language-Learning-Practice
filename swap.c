#include <stdio.h>
#include <windows.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main() {
    SetConsoleOutputCP(65001);
    printf("请输入两个整数: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("交换前: a = %d,b = %d\n", a, b);
    swap(&a, &b);
    printf("交换后: a = %d,b = %d\n", a, b);
    return 0;
}