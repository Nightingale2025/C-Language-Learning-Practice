#include <stdio.h>
#include <windows.h>

int main() 
{
    SetConsoleOutputCP(65001);
    
    int arr[5];
    int sum = 0;
    int max;
    
    printf("输入5个整数哦: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    max = arr[0];
    for (int i = 1; i < 5; i++){
        if (arr[i] > max){
            max = arr[i];
        }else{
            continue;
        }
    }
     printf("总和: %d\n", sum);
        printf("最大值: %d\n", max);
    return 0;
}