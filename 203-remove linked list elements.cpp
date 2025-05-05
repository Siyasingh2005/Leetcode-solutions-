//Problem : https://leetcode.com/problems/remove-linked-list-elements/description/
//Language : C++
//Author : Siya Singh 

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      ListNode*dummy = new ListNode (0);
      dummy->next = head;
      ListNode*prev = dummy; 
      ListNode*curr = head;  

      while(curr){
        
        if (curr->val== val)
        prev->next= curr->next;
        else
        prev = curr; 

        curr = curr->next;
      }
      return dummy->next;
    }
};
