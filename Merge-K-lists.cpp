 struct minp {
	 int val;
	 ListNode* add;
	 bool operator<(const minp& rhs) const
	 {
		 return val > rhs.val;
	 }
	minp(int value, ListNode* cur) :val(value), add(cur) {}
 };
 class Solution {
 public:
	 ListNode* mergeKLists(vector<ListNode*>& lists) {
		 std::priority_queue<minp> min_heap;

		 ListNode* nhead = NULL, *cur = NULL;
		 nhead = new ListNode(1);
		 ListNode* curr;
		 cur = nhead;

		 for (int i = 0; i < lists.size(); i++) {
			 if(lists[i])
				min_heap.push(minp(lists[i]->val, lists[i]));
		 }

		 while (min_heap.size()) {
			 cur->next = new ListNode(min_heap.top().val);
			 curr = min_heap.top().add;
			 min_heap.pop();
			 
			 if (curr->next) {
				 curr = curr->next;
				 min_heap.push(minp(curr->val, curr));
			 }
			 cur = cur->next;
		 }

		 return nhead->next;
	 }
 };
