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
    ListNode* insertionSortList(ListNode* head) {
        if(!head) return nullptr;

        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        while(curr!=nullptr){
            ListNode* prev=dummy;
              while (prev->next !=nullptr && prev->next->val < curr->val) {
                prev = prev->next;
            }

            ListNode* nextNode = curr->next;
            curr->next = prev->next;
            prev->next = curr;

            curr = nextNode;           

        }
        return dummy->next;
    }
};