//Drop every N'th element from a list.

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

Node* dropEveryNth(Node* head, int n)
{
	if(head == NULL)	return NULL;
	
	if(n == 1)	return NULL;
	
	Node* curr = head;
	Node * prev = NULL;
	int cnt = 0;

	while(curr!= NULL)
	{
		cnt++;
		
		if(cnt == n)
		{
			prev->next = curr->next;
			cnt = 0;
		}
		
		if(cnt!=0)	prev = curr;
		
		curr = prev->next;		
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
	cout<<"Please enter the Number: ";
	cin>>n;
	
	llist->head = dropEveryNth(llist->head, n);
	cout<<"List with duplicate elements is: "<<endl;
	display(llist->head);
	return 0;
	
}
