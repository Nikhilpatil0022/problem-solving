//Generate a random permutation of the elements of a list.

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
Node* removeFromPos(Node* head, int pos, LinkedList* llist1)
{
	if (head->next == NULL)
	{
		llist1->insert(head->data);
		return NULL;
	}
	if (pos == 1)
	{
		llist1->insert(head->data);
		return head->next;
	}
	Node* temp = head;
	for(int i=0;i<pos-2;i++)
	{
		temp = temp->next;
	}
	llist1->insert(temp->next->data);
	temp->next = temp->next->next;
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
	
	int cnt = n, u, l = 1;
	
	LinkedList * llist1 = new LinkedList();
	
	for(int i=0;i<cnt;i++)
	{
		u = n;
		int pos = (rand()%(u-l+1))+l;
		llist->head = removeFromPos(llist->head, pos, llist1);
		n--;
		
	}
	cout<<"The newly created list is: "<<endl;
	display(llist1->head);
	cout<<endl;
	return 0;
	
}
