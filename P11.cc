// Modified Run-length encoding of a list.

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

void runLenEnc(Node* head)
{
	Node * curr = head;
	
	int cnt=0;
	
	if(curr == NULL)	return;
	
	while(curr->next != NULL)
	{
		if(curr->data == curr->next->data)
		{
			cnt++;
			curr = curr->next;
		}
		
		else
		{
			cnt++;
			if(cnt == 1)
			cout<<curr->data<<",";
			else
			cout<<"("<<cnt<<","<<curr->data<<")"<<",";
			
			curr = curr->next;
			cnt = 0;
		}
	}
	cnt++;	
	if(cnt == 1)
	cout<<curr->data<<")";
	else					//For last element in list
	cout<<"("<<cnt<<","<<curr->data<<")"<<endl;
	
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
	
	cout<<"Modified encoded List: "<<endl;
	runLenEnc(llist->head);

	
	return 0;
	
}
