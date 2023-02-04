class Solution {
public:
    ListNode* reverseList(ListNode* head){
        ListNode*forward = NULL;
        ListNode*prev = NULL;
        while(head!=NULL){
            forward = head->next;
            head->next = prev;
            prev = head;
            head = forward;
        }
        return prev;
    }
};