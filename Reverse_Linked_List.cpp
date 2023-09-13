class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
        ListNode* prev=NULL;

        while(current!=NULL)
        {
            ListNode* forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
        }
        
        return prev;
    }
};
