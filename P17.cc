//Split a list into two parts; the length of the first part is given.

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

Node* split(Node* head, int n)
{
	if (head == NULL)	return NULL;
	
	Node* temp = head;
	Node* node = NULL;
	int cnt = 0;
	while(temp!= NULL)
	{
		cnt++;
		if(cnt == n)
		{
			node = temp->next;
			temp->next = NULL;
			return node;
		}	
		
		temp = temp->next;
	}
	
	return NULL;
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
	LinkedList * llist1 = new LinkedList();
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
	cout<<"Please enter the length of 1st list: ";
	cin>>n;
	
	llist1->head = split(llist->head, n);
	
	cout<<"Lists after splitting are as follows: "<<endl;
	cout<<"1st List: "<<endl;
	display(llist->head);
	
	cout<<"2nd list: "<<endl;
	display(llist1->head);
	return 0;
	
}
