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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        head->next = removeElements(head->next,val);
        if(head->val==val){
            ListNode* temp = head->next;
            delete head;
            return temp;
        }
        // head->next = removeElements(head->next,val);
        return head;
    }
};
// ListNode* removeElements(ListNode* head, int val) {
//     ListNode* dummy = new ListNode(0);
//     dummy->next = head;

//     ListNode* curr = dummy;

//     while (curr->next != NULL) {
//         if (curr->next->val == val) {
//             ListNode* temp = curr->next;
//             curr->next = temp->next;
//             delete temp;
//         } else {
//             curr = curr->next;
//         }
//     }

//     ListNode* newHead = dummy->next;
//     delete dummy;
//     return newHead;
// }
