#include<iostream>               
using namespace std;            

class Node{
public:
 int data;
 Node *head=NULL;
 Node *next;
 

void first (int H)
{

 Node *n = new Node();
 n->	data=H;
 n->next=head;
 head=n;
}



void last(int t){
	Node*n=new Node;
	n->	data=t;
	n->next=NULL;
	
	if(head==NULL){
		head=n;
	}
	else{
		Node*temp= head;
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
	
}
 void show(){
	
	Node*temp=head;
	
	while(temp!=NULL){
    cout<<temp->data<<"->";
  temp=temp->next;
	}
	
}
void length()
{
    int a = 0; 
    Node* n = head; 
    while (n != NULL) {
        a++;
        n = n->next;
    }
    cout<<" Length is : "<< a;
} 
};

int main(){
 Node *head=NULL;
Node n;
Node m;
n.first(5);
n.first(4);
n.first(1);
n.show();
n.length();
cout<<endl;
m.last(5);
m.last(4);
m.last(3);
m.last(2);
m.show();
m.length();

}