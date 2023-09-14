class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return NULL;
        
        if(head->next==NULL)
            return head;
        ListNode* current=head;
             
        while(current!=NULL&&current->next!=NULL){
            ListNode* forward=current->next;
            if(forward->val==current->val&&forward!=NULL)
            {
                current->next=forward->next;
                forward->next=NULL;
                delete forward;
            }
            
            
            else{
        
            current=current->next;
            }
        }
        
      return  head;  
    }
};
