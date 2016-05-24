 ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *p1,*p2,*cur;
        p1=p2=head;
        for(int i=0;i<n;i++){
            p2=p2->next;
        }
        //to handle the special case.
        if(p2==NULL){
            head=head->next;
            delete p1;
            return head;
        }
        
        while(p2->next!=NULL){
            p2=p2->next;
            p1=p1->next;
        }
        cur=p1->next;
        p1->next=cur->next;
        delete cur;
        return head;
        
        
    }
