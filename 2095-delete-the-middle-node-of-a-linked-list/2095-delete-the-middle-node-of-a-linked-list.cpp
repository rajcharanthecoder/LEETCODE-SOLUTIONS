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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode*slow,*fast;
        slow = head;
        fast = head->next->next;
        //U are Fast And slow is your friend//
        while(fast!=NULL && fast->next!=NULL){
             slow=slow->next;
              fast = fast->next->next;
        }
        slow->next = slow->next->next;
        slow = head;
        return head;
    }
};