#include <stdlib.h>
#include <stdio.h>

//定义链表
typedef struct linkedList {
    int data;
    struct linkedList* next;
}node;
//创建新的链表
node* linkedListCreat(int Array[])
{
    node* p, *pre, *head;
    head = (node*)malloc(sizeof(node));
    head->next = NULL;
    pre = head;
    for (int i = 0; i < 5; i++) {
        p = (node*)malloc(sizeof(node));
        p->next = NULL;
        p->data = Array[i];
        pre->next = p;
        pre = p;
    }
    return head;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    node* newList = linkedListCreat(arr);
    for (int i = 0; i < 5; i++) {
        printf("data:%d\n",newList->data);
        newList = newList->next;
    }
    return 0;
}