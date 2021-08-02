// Duplicate the elements of a list.

#include<bits/stdc++.h>
using namespace std;


class Node{

	public:
		int data;
		Node * next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

class LinkedList{
	public:
		Node* head;
		Node* tail;
		
		LinkedList()
		{
			this->head = NULL;
			this->tail = NULL;
		}
		
		void insert(int data)
		{
			Node* node = new Node(data);
			
			if(this->head == NULL) this->head = node;
			else this->tail->next = node;
			
			this->tail = node;
			
		}
};

Node* createDupli(Node* head)
{
	Node* curr = head;
	Node* nw = NULL;
	
	while(curr!= NULL)
	{
		nw = new Node(curr->data);
		nw->next = curr->next; 
		curr->next = nw;
		curr = nw->next;
	}
	
	return head;
	
}

void display(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head = head->next;
	}
}

int main()
{
	//cout<<"Hello World"<<endl;
	LinkedList * llist = new LinkedList();
	int n;
	cout<<"Please enter the count of list: ";
	cin>>n;
	cout<<"Enter the elements of list:"<<endl;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		llist->insert(data);
	}
	
	//display(llist->head);
	
	llist->head = createDupli(llist->head);
	cout<<"List with duplicate elements is: "<<endl;
	display(llist->head);
	return 0;
	
}
