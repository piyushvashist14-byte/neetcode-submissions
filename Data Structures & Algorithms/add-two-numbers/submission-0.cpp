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
        ListNode* head = new ListNode(0);
        ListNode* curr = head;
        int carry = 0;
        while(l1!=NULL || l2!=NULL ||carry){
            int sum = 0;
            if(l1==NULL && l2!=NULL){
                sum = l2->val+carry;
            }else if(l1!=NULL && l2==NULL){
                sum = l1->val+carry;
            }
            else if(l1==NULL && l2 ==NULL && carry){
                sum=carry;
            }
            else{
                sum = l1->val+l2->val+carry;
            }
             
            ListNode* temp = new ListNode(sum%10);
            curr->next = temp;
            curr = curr->next;
            carry = sum/10;
            if(l1){
                l1=l1->next;
            }
           if(l2){
            l2 = l2->next;
           }
            
        }
        return head->next;
    }
};
