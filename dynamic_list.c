#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){
    SetConsoleOutputCP(65001);

    struct Node *head =NULL;
    struct Node *tail =NULL;
    int num;

    printf("输入数字吧(输入-1结束哦): ");

    while(1){
        scanf("%d",&num);
        if(num == -1)
           break;
        
        struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = num;
        new_node->next = NULL;

        if (head == NULL){
           head = new_node;
           tail = new_node;
        }else{
            tail ->next = new_node;
            tail = new_node;
        }
    }

    printf("你输入的数字列表: ");
    struct Node *p = head;
    while(p != NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
        
    
    p = head;
    while (p != NULL){
    struct Node *temp = p->next;
        free(p);
        p = temp;
    }

    return 0;
}