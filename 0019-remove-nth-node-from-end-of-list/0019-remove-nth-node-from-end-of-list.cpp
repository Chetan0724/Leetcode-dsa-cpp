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
        ListNode* temp = head;
        ListNode* fast = head;
        ListNode* slow = head;

        for(int i = 0; i < n; i++) {
            fast = fast->next;
        }

        if(fast == NULL) {
            ListNode* newHead = slow->next;
            delete slow;
            return newHead;
        }

        while(fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* dltNode = slow->next;
        slow->next = dltNode->next;
        delete dltNode;
        return head;
    }
};