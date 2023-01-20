#include<iostream>
using namespace std;
class node {
public:
	int val;
	node* next;
	node() {
		val = 0;
		next = NULL;
	}
};
class list{
	node* head = NULL;
	node* tail = NULL;
	node* newHead = NULL;
	node* newTail = NULL;
public:
	void insertAtTail(int newValue) {
		node* temp = head;
		node* newNode = new node;
		newNode->val = newValue;
		if (head == NULL) {			
			newNode->next = newNode;
			head = tail = newNode;
		}
		else {
			newNode->next = head;
			tail->next = newNode;
			tail = newNode;	
		}
	}
	void printlist() {
		cout << "\n";
		node* temp = head;
		do
		{
			cout << temp->val << "->";
			temp = temp->next;
		}
		while (temp != head);
		cout << endl;
	}
	void copyInsert (int newValue) {
		node* temp = newHead;
		node* newNode = new node;
		newNode->val = newValue;
		
		if (newHead == NULL) {
			newNode->next = newNode;
			newHead =newTail = newNode;
		}
		else {
			newNode->next = newHead;
			newTail->next = newNode;
			newTail = newNode;
		}
	}
	void Display() {
		cout << "\n";
		node* temp = newHead;
		do
		{
			cout << temp->val << "->";
			temp = temp->next;
		} while (temp != newHead);
		cout << endl;
	}
	void copy() {
		node* temp = head;		
		do
		{
			copyInsert(temp->val);
			temp = temp->next;
		} while (temp != head);
	}
	void reverse() {
	}
};
int main() {
	int arr[5];
	list* l = new list();
	l->insertAtTail(10);
	l->insertAtTail(20);
	l->insertAtTail(30);
	l->insertAtTail(40);

	l->printlist();
	l->copy();

	 l->Display(); 
	 l->printlist();
}
	
	
	