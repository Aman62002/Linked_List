class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* current=head;
        ListNode* prev=NULL;
        int count=0;
        
        
        while(current!=NULL&&count<2)
        {
            ListNode* forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
            count++;
        }
        
        ListNode* rest=prev;
        
        ListNode* remaining=swapPairs(current);
        rest->next->next=remaining;
        
        return prev;
        
        
        
        
        
    }
};
