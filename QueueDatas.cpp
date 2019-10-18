#include<iostream>
#define size 5
using namespace std;
int front=-1, rear=-1, arr1[size];

void push()
{
	int elem;
	if(rear==size-1)
		cout<<"Queue is overfull "<<endl;
	else 
	{
			if(front==-1)
				front=0;
			rear++;
			cout<<"enter the element : \t";
			cin>>elem;
			arr1[rear]=elem;	
	}
}

void pop()
{
	if(front==-1 && rear==-1)
		cout<<"Queue is underflow";
	else
		front++;	
}

void traverse()
{
	if(front==-1 || front>rear)
		cout<<"Queue is underflow"<<endl;
		
	else
		for(int i=front;i<=rear;i++)
		{
			
			cout<<"\t"<<arr1[i]<<endl;
		}	
}

int main()
{
	int elem=0,con=0;
	do{
		cout<<"Enter 1 for push operation"<<endl;
		cout<<"Enter 2 for pop operation"<<endl;
		cout<<"Enter 3 form peek operation"<<endl;
		cin>>elem;
		switch(elem)
		{
			case 1:	push();
					break;
			case 2: pop();
					break;
			case 3: traverse();
					break;				
		};
		
		cout<<"enter 1 to continue \n"<<endl;
		cin>>con;
	}while(con==1);
	
}
	


