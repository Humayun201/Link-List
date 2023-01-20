#include<iostream>
#include<vector>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
	void insertNode(node*& tail, int d) {
		if (tail == NULL) {
			node* temp = new node(d);
			tail = temp;
			tail->next = temp;
			temp->next = tail;
			return;
		}
		node* temp = new node(d);
		temp->next = tail->next;
		tail->next = temp;
		tail = temp;

	}
	void print(node* tail) {
		if (tail == NULL) {
			cout << "Linked List is Empty" << endl;
			return;
		}
		node* current = tail;
		do {
			tail = tail->next;
			cout << tail->data << "->";
		} while (tail != current);
		cout << endl;
		
	}
	void checkduplicate(node* tail) {
		node* current = tail->next;
		int i = 0;
		int arr[10];
		node* nextnode = current->next;
		while (current!=tail) {
			while (nextnode != tail) {
				if (current->data == nextnode->data) {
					arr[i] = current->data;
					i++;
				}
				nextnode = nextnode->next;
			}
			current = current->next;
			nextnode = current->next;
		}

			for (int j = 0;j<i  ;j++) {
				cout << " " << arr[j];
			}
			cout << endl;
	}
	bool checkcircular(node*tail) {
		tail = tail->next;
		node* head = tail->next;
		do {
			head = head->next;
			if (head->next==tail) {
				return true;
			}
		} while (head->next!=tail);
		return false;
	}
};
int main() {
	node* tail=NULL;
	tail->insertNode(tail,1);
	tail->insertNode(tail,2);
	tail->insertNode(tail,3);
	tail->insertNode(tail, 1);
	tail->insertNode(tail, 2);
	tail->insertNode(tail, 6);
	tail->insertNode(tail, 7);
	tail->insertNode(tail, 8);
	tail->insertNode(tail, 1);
	tail->insertNode(tail, 10);
	tail->print(tail);
	tail->checkduplicate(tail);
	tail->print(tail);
	cout<<tail->checkcircular(tail);
}