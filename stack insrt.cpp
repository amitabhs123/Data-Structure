#include<iostream>
using namespace std;
#define CAPACITY 5
int top=-1;
int stack[CAPACITY];

int isfull(){
	if(top == CAPACITY-1)
		return 1;
	else
		return 0;
}


int isEmpty(){
	if(top== -1)
		return 1;
	else
		return 0;	
}


void push(){
	int elem;
		if(isfull())
			cout<<"Stack is full"<<endl;
		else
			top++;
			cin>>elem;
			stack[top]=elem;
		
	}
	
void pop()
	{
		int elem;
		if(isEmpty())
		{
			cout<<"Stack is Empty"<<endl;
		}
		else
		{
			elem = stack[top];
			top--;				
		}
	}
	
int peek()
{
	if(isEmpty())
		return 0;
	else
		return stack[top]; 		
}	
	
void traverse()
{
	if(isEmpty())
		cout<<"Their is no element in Stack"<<endl;
	else{
			cout<<"Stack element are :";
			for(int i=0;i<=top;i++)
			{
				cout<<stack[i];
			}
		}	
}


int main(){
	
	int z;
	push();
	push();
	pop();
	z=peek();
	cout<<"Peek is"<<z<<endl;
	traverse();
}
