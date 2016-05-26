class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     if (head == NULL)
			return NULL;

		if (head->next == NULL)
			return head;
		ListNode *p1, *p2, *nhead, *cur;
		p1 = head;
		p2 = p1->next;
		nhead = new ListNode(0);
		cur = nhead;

		while (p2 != NULL && p1!=NULL) {
			cur->next = new ListNode(p2->val);
			cur = cur->next;
			cur->next = new ListNode(p1->val);
			cur = cur->next;

			p2 = p2->next;
			if (p2 == NULL)
				break;
			p2 = p2->next;
			p1=p1->next->next;
			if(p2==NULL){
			    cur->next=new ListNode(p1->val);
			}
		}
		return nhead->next;
        
        
    }
};