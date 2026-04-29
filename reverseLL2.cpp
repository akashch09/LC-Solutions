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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        // Step 1: Reach the node just before the 'left' position
        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        // Step 2: Standard linked list reversal for the specified range
        ListNode* curr = prev->next;
        ListNode* temp = nullptr;
        ListNode* Lnext = nullptr;
        
        for (int i = 0; i <= right - left; i++) {
            Lnext = curr->next;
            curr->next = temp;
            temp = curr;
            curr = Lnext;
        }

        // Step 3: Reconnect the reversed segment with the rest of the list
        prev->next->next = curr;
        prev->next = temp;

        ListNode* result = dummy->next;
        delete dummy; // Clean up the dummy node memory
        return result;
    }
};
