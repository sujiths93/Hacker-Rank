/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *p1, *p2,*cur;
		p1 = p2 = NULL;
		cur = head;
		if (head == NULL)
			return NULL;
		if (m == n)
			return head;
        ListNode *p3;
		if (m == 1) {
			for (int i = 1; i <n; i++) {
				cur = cur->next;
			}
			p1 = head;
			p2 = cur->next;
			while (m <= n) {
				p3 = p1->next;
				p1->next = p2;
				++m;
				p2 = p1;
				p1 = p3;
			}
			
			return p2;
			
		}
		ListNode *p5=NULL;
		for (int i = 1; i <n; i++){
			if (i == m - 1)
				p5 = cur;
			if (i == m)
				p1 = cur;
			cur = cur->next;
		}
		
		p2 = cur;
		p2 = p2->next;

		while (m <= n) {
			p3 = p1->next;
			p1->next = p2;
			++m;
			p2 = p1;
			p1 = p3;
		}
		p5->next = p2;

		return head;

    }
};