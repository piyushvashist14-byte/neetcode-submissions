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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>>ans;
        for(ListNode* x:lists){
            if(x){
                ans.push({x->val,x});
            }
            
        }

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        while(!ans.empty()){
            auto temp = ans.top();
            ans.pop();

            ListNode* tnode = temp.second;
            tail->next = tnode;
            tail = tail->next;

            if(tnode->next){
                ans.push({tnode->next->val,tnode->next});
            }
        }
        tail->next=nullptr;
        return dummy->next;
    }
};
