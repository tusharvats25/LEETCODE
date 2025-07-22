/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp=head;   //take a temp node and initialize it with head.
        while(temp!=NULL&&temp->next!=NULL) {
            int a=temp->val;
            int b=temp->next->val;
            temp->next->val=a;
            temp->val=b;
            temp=temp->next->next;
        }
        return head;
    }
};