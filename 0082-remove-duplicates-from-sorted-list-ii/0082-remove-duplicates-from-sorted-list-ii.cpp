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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = head;
        ListNode* prev = temp;
        while(curr!=NULL){
            if(curr->next!=NULL&&curr->val == curr->next->val){
                //skip nodes
                while(curr->next!=NULL&& curr->val==curr->next->val){
                    curr = curr->next;
                }
                // asign prev next value to curr next
                prev->next = curr->next;
            }else{
                //increment pointers
                prev = prev->next;
            }
            //it will increment in both cases
            curr = curr->next;
        }
        return temp->next;
    }
};