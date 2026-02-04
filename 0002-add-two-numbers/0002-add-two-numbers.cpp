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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode();
        ListNode* curr = temp;
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        int carry = 0;
        while(h1!=NULL||h2!=NULL||carry!=0){
            int sum = carry;//add arry in xurr->next element in sum
            if(h1!=NULL){
                sum+=h1->val;
                h1=h1->next;
            }
            if(h2!=NULL){
                sum+=h2->val;
                h2=h2->next;
            }
            carry = sum/10;//it will store carry 
            curr->next = new ListNode(sum%10);
            curr = curr->next;
        }
        return temp->next;
    }
};