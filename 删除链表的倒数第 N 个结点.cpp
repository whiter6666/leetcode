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
        ListNode* front = head;
        ListNode* behind = head;
        if(head == NULL)
            return head;
        for(int i = 0;i < n;++i)
            behind = behind->next;
        if(behind == NULL)
            return head->next;
        while(behind->next != NULL){
            front = front->next;
            behind = behind->next;
        }
        front->next = front->next->next;
        return head;
    }
};
