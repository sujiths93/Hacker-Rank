
#include "stdafx.h"
#include "iostream"
#include "stack"
#include "vector"
#include "queue"
#include "functional"
using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 struct ID {
	 int ele;
	 ListNode *ad;

	 bool operator <(const ID & rhs)const 
	 {
		 return ele > rhs.ele;
	 }
 };

class Solution {
public:
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		priority_queue<ID> q;
		ListNode *cur = lists[0];
		ID node;
		for (int i = 0; i < lists.size(); ++i) {
			cur = lists[i];
			node.ele = cur->val;
			node.ad = cur;
			//cout << node.ele << "    " << node.ad<<endl;
			q.push(node);
		}
		ListNode *newhead = new ListNode(0);
		ListNode *curr = newhead;
		ID i;
		while (!q.empty()) {
			i = q.top();
			curr->next = new ListNode(i.ele);
			curr = curr->next;

			q.pop();
			cur = i.ad;
			if (cur->next != NULL) {
				cur = cur->next;
				node.ele = cur->val;
				node.ad = cur;
				q.push(node);
			}
			
		}
		newhead = newhead ->next;
		return newhead;
	}
};
int main()
{
	//create a list of nodes.
	vector <ListNode*> lists;
	lists.push_back(new ListNode(0));
	lists.push_back(new ListNode(0));
	lists.push_back(new ListNode(0));
	ListNode *cur = lists[0];
	
	cur->val = 1;
	cur->next = new ListNode(2);
	cur = cur->next;
	cur->next = new ListNode(3);
	cur= cur->next;
	cur->next = new ListNode(10);
	cur = cur->next;
	cur->next = new ListNode(20);
	
	cur = lists[1];
	cur->val = 15;
	cur->next = new ListNode(18);
	cur = cur->next;
	cur->next = new ListNode(20);
	cur = cur->next;
	cur->next = new ListNode(25);
	cur = cur->next;

	cur = lists[2];
	cur->val = 30;
	cur->next = new ListNode(60);
	cur=cur->next;
	cur->next = new ListNode(90);
	cur= cur->next;

	ListNode *a=NULL;
	for (int i = 0; i < lists.size();++i) {
		a = lists[i];
		while (a!=NULL) {
			cout << a->val << "->";
			a = a->next;
		}
		cout << endl;
	}
	Solution s;
	
	ListNode *r=s.mergeKLists(lists);
	cout << "RESULTANT LIST" << endl;
	while (r != NULL) {
		
		cout << r->val<<"->";
		r = r->next;
	}
	cout << endl;
	return 0;
}

