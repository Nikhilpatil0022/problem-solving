// Extract a given number of randomly selected elements from a list.

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
	int n, l = 1, u;
	
	cout<<"Please enter count: ";
	cin>>n;
	
	cout<<"Enter Upper bound: ";
	cin>>u;
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		int data = (rand()%(u-l+1))+l;
		llist->insert(data);
	}
	
	display(llist->head);
	return 0;
	
}
