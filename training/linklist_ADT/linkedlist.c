#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
}Linkedlist;

/* 创建单链表 */
Linkedlist *creat(int n)
{
    Linkedlist *head, *node, *end;//定义头节点，普通节点，尾部节点；
    head = (Linkedlist*)malloc(sizeof(Linkedlist));//分配地址
    end = head; //尾节点指向头结点，若是空链表则头尾节点一样
    for (int i = 0; i < n; i++) {
        node = (Linkedlist*)malloc(sizeof(Linkedlist)); //创建每一个节点
        printf("NO.%d ",i+1);
        scanf("val:%d",&node->val);
        end->next = node; //尾节点和node建立连接，指向node
        end = node;//把尾节点放到node
    }
    end->next = NULL;//结束创建
    return head;
};
/* 修改链表节点值 */
void ChangeNodeVal(Linkedlist *head, int n, int target_val) //n为第n个节点, target_val为目标值
{
    if (head == NULL) return NULL;
    Linkedlist *t = head;
    int i = 0;
    while(i < n) {
        t = t->next;
        i++;
    }
    if (i == n) t->val = target_val;
}
/* 删除链表节点 */
void DeleteNode(Linkedlist *head, int n)//n为第n个节点
{
    if (head == NULL) return NULL;
    Linkedlist *p = head;
    int i = 0;
    while(i < n) {
        p = p->next;
        i++;
    }
    Linkedlist *q = p->next;
    p->next = q->next;
    free(q);
}
/* 插入链表节点 */
void InsertNode(Linkedlist *head, int n, int target_val)//n为第n个节点
{
    if (head == NULL) return NULL;
    Linkedlist *p = head;
    int i = 0;
    while(i < n) {
        p = p->next;
        i++;
    }
    Linkedlist *newNode = (Linkedlist*)malloc(sizof(p->next));
    newNode->val = target_val;
    newNode->next = p->next;
    newNode = p->next;
}
/* 打印链表节点 */
void PrintNode(Linkedlist *head)
{
    Linkedlist *t = head;
    while(head->next != NULL) {
        printf("%d\n",t->val);
        t = t->next;    //由于head值为0，其实可以移到上面
    }
}

int main()
{
    Linkedlist *creat(5);

}