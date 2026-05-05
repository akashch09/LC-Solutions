class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next = head; // Use . instead of ->
        ListNode* prev = &dummy; // dummy is an object, so prev needs its address
        
        while(prev->next && prev->next->next){
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;

            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
        }
        return dummy.next; // Use . instead of ->
    }
};
