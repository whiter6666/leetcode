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
    struct status{
        int val;
        ListNode *next;
        bool operator < (const status &cmp) const{
            return val > cmp.val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode res;
        ListNode* p = &res;
        priority_queue<status> pq;
        for(auto head : lists){
            if(head)
                pq.push({head->val,head});
        }
        while(!pq.empty()){
            auto f = pq.top();
            p->next = f.next;
            pq.pop();
            p = p->next;
            if(f.next->next)
                pq.push({f.next->next->val,f.next->next});
        }
        return res.next;
    }
};
