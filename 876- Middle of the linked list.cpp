// Problem : https://leetcode.com/problems/middle-of-the-linked-list/description/
// language : c++
// Author : Siya Singh

class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* s1 = head;
        ListNode* s2 = head;

        while (s2 != nullptr && s2-> next != nullptr){
            s1 = s1-> next;
            s2 = s2-> next->next;

        }
        return s1;
     
    }
};
