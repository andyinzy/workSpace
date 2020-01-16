/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 *
 * https://leetcode-cn.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (53.31%)
 * Total Accepted:    52.3K
 * Total Submissions: 98.1K
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 示例：
 * 
 * 输入：1->2->4, 1->3->4
 * 输出：1->1->2->3->4->4
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//非递归
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)return l2;//just in case
        if(l2 == nullptr)return l1;
        ListNode *curr = new ListNode(-1);//new node of new Linkedlist
        ListNode *root = curr;//head
        while(l1!=nullptr && l2!=nullptr){
            if(l2->val>=l1->val){
                curr->next = l1;
                curr = l1;
                l1 = l1->next;
            }else{
                curr->next = l2;
                curr = l2;
                l2 = l2->next;
            }
            if(l1!=nullptr)curr->next = l1;
            if(l2!=nullptr)curr->next = l2;
        }
        return root->next;
    }
};

