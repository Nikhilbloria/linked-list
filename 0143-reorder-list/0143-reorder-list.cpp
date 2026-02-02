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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next == NULL){
            return;
        }
        //middle of ll
        // ListNode* temp = new ListNode();
        // temp->next = head;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        //reverse a ll
        ListNode* curr = slow->next;
        slow->next = NULL;//cut the list
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        // merge ll
        ListNode* t1 = head;
        ListNode* t2 = prev;
        while(t1!=NULL && t2!=NULL){
            ListNode* m1 = t1->next;
            ListNode* m2 = t2->next;
            t1->next = t2;
            t2->next = m1;
            t1 = m1;
            t2 = m2;
        }
    }
};