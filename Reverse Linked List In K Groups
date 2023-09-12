int lengthOfLinkedList(Node* &head) {

    Node* temp = head;

    int length = 0;

    while(temp) {

        length ++;

        temp = temp -> next;

    }

    return length;

}


 

Node* kReverse(Node* head, int k) {


 

    int length = lengthOfLinkedList(head);


 

    // base case

    if(head == NULL || k > length) {

        return head;

    }


 

    // Step 1: reverse first k node

    Node* next = NULL;

    Node* curr = head;

    Node* prev = NULL;

    int count = 0;


 

    while(curr != NULL && count < k) {

        next = curr -> next;

        curr -> next = prev;

        prev = curr;

        curr = next;

        count++;

    }


 
    if(next != NULL) {

        head -> next = kReverse(next, k);

    }


    return prev;


 

}

