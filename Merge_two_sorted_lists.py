 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *nl=new ListNode(0);
        ListNode *cur=nl;
        ListNode *a=l1;
        ListNode *b=l2;
        
        if(!l2) return l1;
        if(!l1) return l2;
        
        while(a&&b){
            if(a->val<b->val){
                cur->next=new ListNode(a->val);
                a=a->next;
            }
            else {
                cur->next=new ListNode(b->val);
                b=b->next;
            }
             cur=cur->next;
        }
            if(a){
                cur->next=a;
                
            }
            else if(b){
                cur->next=b;
                
            }
            return nl->next; 
        
    }
