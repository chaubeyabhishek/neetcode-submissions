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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL && n <= 0){
            return head;
        }
        ListNode* prev = NULL;
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i=0;i<n;i++){
            if(head == NULL){
                return head;
            }
            fast = fast->next;
        }

        while(fast != NULL){
            fast = fast->next;
            prev = slow;
            slow = slow->next;
        }

        if(prev == NULL){
            ListNode* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            prev->next = slow->next;
        }

        return head;
        
    }
};
