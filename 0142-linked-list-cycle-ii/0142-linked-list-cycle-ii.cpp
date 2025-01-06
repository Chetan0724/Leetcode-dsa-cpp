/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        // check for loop
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
            if (fast == slow) {
                break;
            }
        }

        if (fast == NULL) {
            // no cycle present
            return NULL;
        }

        // yahan aa gaya matlab slow and fast meet kar chuke h

        slow = head;

        // slow and fast --> 1 step

        while (fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }

        // return starting point
        return slow;
    }
};