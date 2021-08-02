// Insert an element at a given position into a list.

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
Node* insertAtPos(Node* head, int pos, int data)
{
	Node* node = new Node(data); 
	if(pos == 1)
	{
		node->next = head;
		head = node;
	}
	else{
		Node* temp = head;
		for(int i=0;i<pos-2;i++)
		{
			temp = temp->next;
		}
		
		node->next = temp->next;
		temp->next = node;
	}
	return  head;
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
	
	int pos, data;
	cout<<"Enter data to be inserted: ";
	cin>>data;
	cout<<endl;
	cout<<"Enter the Position of node: ";
	cin>>pos;
	cout<<endl;
	
	llist->head = insertAtPos(llist->head, pos, data);
	display(llist->head);
	return 0;
	
}
