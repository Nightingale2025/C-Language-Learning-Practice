#include <stdio.h>
#include <windows.h>
#include <string.h>
int main() {
    SetConsoleOutputCP(65001);

    char name[1][20] = {"张三"};
    strcpy (name[0],"张三丰");
    printf("%s\n", name[0]);
    return 0;
}

    