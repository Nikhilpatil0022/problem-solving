//Rotate a list N places to the left.

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

Node* split(Node* head, int r)
{
	if (head == NULL)	return NULL;
	
	Node* temp = head;
	Node* node = NULL;
	int cnt = 0;
	while(temp!= NULL)
	{
		cnt++;
		if(cnt == r)
		{
			node = temp->next;
			temp->next = NULL;
			return node;
		}	
		
		temp = temp->next;
	}
	
	return NULL;
}

Node * joinLists(Node* head1, Node* head2)
{
	Node* temp = head2;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
	temp->next = head1;
	
	return head2;
}

void display(Node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

int main()
{
	//cout<<"Hello World"<<endl;
	LinkedList * llist = new LinkedList();
	LinkedList * llist1 = new LinkedList();
	int n,r;
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
	cout<<"Please enter the number of rotations: ";
	cin>>r;
	
	if(r<0) 							// rotating r times to the right is same as rotating n-r times to the left
	{
		r = n + r; 
	}
	
	llist1->head = split(llist->head, r);
	
	llist->head = joinLists(llist->head, llist1->head);
	
	cout<<"List after roatating: "<<endl;
	display(llist1->head);
	return 0;
	
}
