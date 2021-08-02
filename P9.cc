// Pack consecutive duplicates of list elements into sublists.

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
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

void combineDupli(Node* head)
{
	Node * curr = head;
	
	LinkedList* ll = new LinkedList();
	
	if(curr == NULL)	return;
	
	while(curr->next != NULL)
	{
		if(curr->data == curr->next->data)
		{
			ll->insert(curr->data);
			curr = curr->next;
		}
		
		else
		{
			ll->insert(curr->data);
			display(ll->head);
			curr = curr->next;
			ll->head = NULL;
		}
	}
	ll->insert(curr->data);						//For last element in list
	display(ll->head);
	
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
	
	cout<<"Lists formed after combining duplicates are: ";
	combineDupli(llist->head);

	
	return 0;
	
}
