//Create a list containing all integers within a given range.

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
	int l, u;
	cout<<"Enter Lower bound: ";
	cin>>l;
	cout<<endl;
	cout<<"Enter Upper bound: ";
	cin>>u;
	cout<<endl;
	if (l<=u)
	{
		for(int i=l;i<=u;i++)
		{
			llist->insert(i);
		}
	}
	else
	{
		for(int i=l;i>=u;i--)
		{
			llist->insert(i);
		}
	}

	display(llist->head);
	return 0;
	
}
