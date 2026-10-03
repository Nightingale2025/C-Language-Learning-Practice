#include <stdio.h>
#include <windows.h>

int my_pow(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}
int main()
{
    SetConsoleOutputCP(65001);

    int b, e;
    printf("输入底数和指数吧 (空格隔开哦): ");
    scanf("%d %d", &b, &e);
    int r = my_pow(b, e);
    printf("%d 的 %d 次方是: %d哦\n", b, e, r);
    return 0;
}