// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


//Definition for singly-linked list.
struct ListNode {
int val;
ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
		ListNode *headernode, *header, *nextnode, *tail;
		headernode = NULL;
		header = head;
		tail = head;
		nextnode = head;
		while (nextnode != NULL) {
			header = nextnode;
			tail = nextnode;

			for (int i = 1; i<k; i++) {
				tail = tail->next;
				if (tail == NULL) break;
			}

			if (tail != NULL) {
				nextnode = tail->next;
				tail->next = NULL;
				header = reverse(header, tail->next);
			}

			else nextnode = NULL;

			if (headernode == NULL) {
				headernode = header;
			}
			else {
				Get_Last_Node(headernode)->next=header;
			}
		}

		return headernode;
	}
	ListNode *reverse(ListNode* head, ListNode *tail) {
		
		ListNode *temp;
		while (head!=NULL) {
			temp=head->next;
			head->next = tail;
			tail = head;
			head = temp;
		}
		return tail;
		
	}
	ListNode* Get_Last_Node(ListNode *head) {
		ListNode *cur = head;
		while (cur->next != NULL) {
			cur = cur->next;
		}
		return cur;
	}
}; 

int main()
{
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(6);
	ListNode* cur = head->next->next->next;
	Solution s;
	head=s.reverseKGroup(head,5);
	ListNode*head1 = head;

	while (head != NULL) {
		cout << head->val;
		head = head->next;
	}
	

    return 0;
}

