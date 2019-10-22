#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    if (head == NULL) return NULL;
    struct ListNode p = head->next;
    if (head->val < p->next) head = head->next;
}

int main(){

}