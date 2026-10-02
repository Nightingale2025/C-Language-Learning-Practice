#include <stdio.h>
#include <windows.h>

int main() 
{
    SetConsoleOutputCP(65001);
    
    int arr[5];
   
    printf("输入5个整数哦: \n");
     for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("逆序输出: \n");
    for (int i = 4; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}