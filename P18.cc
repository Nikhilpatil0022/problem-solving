//Extract a slice from a list

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

Node* sliceList(Node* head, int l, int u)
{
	if (head == NULL)	return NULL;
	
	Node* temp = head;
	Node* node = NULL;
	int cnt = 0;
	while(temp!= NULL)
	{
		cnt++;
		if(cnt == l)
		{
			head = temp;
		}	
		if(cnt == u)
		{
			temp->next = NULL;
			return head;
		}
		temp = temp->next;
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
	
	int n,l,u;
	
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
	cout<<"Please enter lower bound: ";
	cin>>l;
	
	cout<<"Please enter upper bound: ";
	cin>>u;
	
	llist->head = sliceList(llist->head, l, u);
	
	cout<<"List after slicing: "<<endl;
	display(llist->head);
	
	return 0;
	
}
