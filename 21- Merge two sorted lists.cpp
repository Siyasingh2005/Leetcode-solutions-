// Problem: https://leetcode.com/problems/merge-two-sorted-lists/description/
// Lnguage : c++
// Author : Siya Singh 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        ListNode* l1 = list1;
        ListNode* l2 = list2;

        while (l1 != NULL && l2 != NULL) {
            if (l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }

        curr->next = (l1 != NULL) ? l1 : l2;

        return dummy->next;
    }
};
