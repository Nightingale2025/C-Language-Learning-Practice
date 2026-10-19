#include<stdio.h>
#include<windows.h>

int add (int a,int b){
    return a+b;
}
int sub (int a,int b){
    return a-b;
}
int mul (int a,int b){
    return a*b;
}
int main(){
    SetConsoleOutputCP(65001);

    int (*ops[3])(int,int) = {add,sub,mul};
    int choice;
    printf("1.加法 2.减法 3.乘法\n选一个吧:");
    scanf("%d",&choice);

    if (choice <=3 && choice >=1){
        int a;
        int b;
        printf("输入两个数字吧");
        scanf("%d %d",&a,&b);
        int result = ops[choice-1](a,b);
        printf("结果是: %d哦",result);
    }else{
        printf("输入无效哦");
    }
    return 0;
}