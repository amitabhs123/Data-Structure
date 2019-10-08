#include<iostream>
using namespace std;
void createNode();
void Display();
void InsertAtBeg();
void InsertAtEnd();
void InsertAfterpos();
struct node
	{
		int data;
		struct node*prev;
		struct node*next;
	};
	struct node *head=NULL, *tail=NULL, *temp=NULL, *newnode;
	
void add_docs()
{
	newnode= new node();
	cout<<"Enter the data"<<endl;
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
}

	
int main()
{
	int choice;
	cout<<"Doubly Linked List"<<endl;
	do
	{
	cout<<"Enter Your choice"<<endl;
	cout<<"1 Create Node"<<endl;
	cout<<"2 Display Element"<<endl;
	cout<<"3 Insert At Begining"<<endl;
	cout<<"4 Insert At End"<<endl;
	cout<<"5 Insert After Specific Element"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			    createNode();
			    break;
		case 2:
			    Display();
			    break;
		case 3:
			    InsertAtBeg();
			    break;
		case 4:
			    InsertAtEnd();
			    break;
		case 5:
			    InsertAfterpos();
			    break;						    
		default:
				cout<<"wrong choice";	    
	}
	 
	
    }while(choice!=0);
}
	
void createNode()
{
	add_docs();
	if(head==NULL)
	{
		head=tail=newnode;
	}
	else
	{
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
		newnode->next=NULL;
	}
	
}	

void Display()
{
	if(head=NULL)
	{
		cout<<"There is no node"<<endl;
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" "<<endl;
			temp=temp->next;
		}
	  cout<<endl<<endl;
	}
		
}

}

