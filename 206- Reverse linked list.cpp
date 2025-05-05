//Problem: https://leetcode.com/problems/reverse-linked-list/description/
//language : c++
// Author: Siya Singh 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

     ListNode* prev = NULL;
     while(head!= NULL)
     {
        ListNode* nextnode = head-> next;
        head->next = prev;
        prev = head;
        head = nextnode;
     } 

     return prev;  
    }
};
