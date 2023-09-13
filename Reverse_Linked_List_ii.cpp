class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* current=head;
        ListNode* prev=NULL;

        while(current!=NULL){
            ListNode* forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;

        }

        return prev;

    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        int count=1;

        while(count!=left){
            prev=temp;
            temp=temp->next;
            count++;
        }
        
        ListNode* current=temp;

        while(count!=right){
            temp=temp->next;
            count++;
        }
        
        ListNode* rest=temp->next;
        temp->next=NULL;

        ListNode* newhead=reverse(current);
        if(prev!=NULL)
        prev->next=newhead;

        ListNode* t1=newhead;
        while(t1->next!=NULL){
           t1=t1->next;
        }
        t1->next=rest;

        if(left==1)
        return newhead;
        else 
        return head;
        
        
    }
};
