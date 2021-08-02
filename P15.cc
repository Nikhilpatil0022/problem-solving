//Replicate the elements of a list a given number of times.

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

Node* replicate(Node* head, int r)
{
	LinkedList* llist1 = new LinkedList();
	
	while(head!= NULL)
	{
		for(int i=0; i<r; i++)
		{
			llist1->insert(head->data);				
		}
		head = head->next;
	}
	
	return llist1->head;
	
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
	int n, r;
	cout<<"Please enter the count of list: ";
	cin>>n;
	cout<<"Enter the elements of list:"<<endl;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		llist->insert(data);
	}
	
	cout<<"Enter the number of replications: ";
	cin>>r;
	//display(llist->head);
	
	llist->head = replicate(llist->head, r);
	cout<<"List with replicated elements is: "<<endl;
	display(llist->head);
	return 0;
	
}
