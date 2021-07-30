// Find out whether a list is a palindrome.

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
bool isPalindrome(Node* head)
{
	if(head==NULL || head->next==NULL)
		return true;
	
	stack<int> s;
	Node* temp = head;
	
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp=temp->next;
	}
	while(head!=NULL)
	{
		int a = s.top();
		s.pop();
		
		if(head->data != a) return false;
		
		head = head->next;
	}

	return true;
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
	
	
	if(isPalindrome(llist->head)) cout<<"The is list a palindrome"<<endl;
	else cout<<"The list is not a palindrome"<<endl;
	return 0;
	
}
