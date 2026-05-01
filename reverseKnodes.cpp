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
    // Helper function to reverse a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* trav = head;
        ListNode* curr = head;
        ListNode* dummy2 = dummy;

        int count = 0;
        while (trav != nullptr) {
            count++;
            if (count == k) {
                ListNode* newNext = trav->next;
                trav->next = nullptr; // Temporarily break the list
                
                ListNode* newList = reverse(curr);
                dummy2->next = newList;

                // After reverse, 'curr' is now the tail of the reversed segment
                ListNode* tail = curr;
                tail->next = newNext;

                // Prepare for the next segment
                dummy2 = tail;
                trav = newNext;
                curr = trav;
                count = 0;
            } else {
                trav = trav->next;
            }
        }
        
        ListNode* result = dummy->next;
        delete dummy; // Clean up the dummy node
        return result;
    }
};
