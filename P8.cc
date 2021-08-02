// Eliminate consecutive duplicates of list elements.

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
void removeDupli(Node* head)
{
	Node * curr = head;
	Node * nxt;
	
	if(curr == NULL)	return;
	
	while(curr->next != NULL)
	{
		if(curr->data == curr->next->data)
		{
			nxt = curr->next->next;
			curr->next = nxt;
		}
		
		else
		{
			curr = curr->next;
		}
	}
	
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
	
	removeDupli(llist->head);
	
	cout<<"List after removing the Duplicates: "<<endl;
	display(llist->head);
	
	return 0;
	
}
