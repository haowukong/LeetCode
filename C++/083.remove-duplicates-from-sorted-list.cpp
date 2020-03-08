/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *i=head;
        while(i!=NULL&&i->next!=NULL){
            if(i->val==i->next->val)
                i->next=i->next->next;
            else
                i=i->next;
        }
        return head;
    }
};