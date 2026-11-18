#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct node {
    int data;
    struct node *next;
};
struct node *delete_node(struct node* head,int target){

    struct node *prev = NULL;
    struct node *curr = head;

    while (curr != NULL) {
        if (curr -> data == target) {

            if (prev == NULL) {
                head = curr->next;
            }else{
                prev ->next = curr->next;
            }
            free (curr);
            printf("已删除%d\n",target);
            return head;
        }
        prev = curr;
        curr = curr->next;
    }
    printf("没找到%d哦\n",target);
    return head;
}
