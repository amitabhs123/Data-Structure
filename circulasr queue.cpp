#include<iostream>
using namespace std;
 int cqueue[6];

 int front = -1;
 int rear = -1;
 int ele;
int ch,i;

			void insert(int ele)
			{
			if(front==rear+1||rear==5)
			{
				cout<<"cqueue is full\n";
			}
			else if(front==-1 && rear==-1)
			{
				front=rear=0;
				cout<<"enter the data to be inserted\n";
				cin>>ele;
				cqueue[rear]=ele;
				}
				else if(rear=0)
				{
					cout<<"enter the data to be inserted\n";
				cin>>ele;
					cqueue[rear] = ele;
				}
				else
				 {
					rear++;
					cout<<"enter the data to be inserted\n";
					cin>>ele;
					cqueue[rear]=ele;	
				}
				
			}
	
			
			
			
		void deleteEle()
		{
			if(front==-1 && rear==-1)
			{
				cout<<"cqueue is empty\n";
				
			}
				else if(front== rear)
				{
					
					
						ele = cqueue[front];
						front = rear = -1;
						cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;
   
				}
					else if(front = 5)
					{
						ele =cqueue[front];
						front = 0;
						cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;
   
					}
					else
					{
						ele = cqueue[front];
						cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;
   
						front++;
						
					}
		}		
			
			
			
			
			
			
			
			
			
			void display()
			{
			if(front==-1 && rear==-1)
			{
				cout<<"cqueue is empty\n";
			}
			if (front <= rear)
			 {
      		while (front <= rear)
			  {
         	cout<<cqueue[front]<<" ";
        	 front++;
      }
   } 
   else
    {
      while (front <= 5)
	   {
         cout<<cqueue[front]<<" ";
         front++;
      }
      front = 0;
      while (front <= rear) 
	  {
         cout<<cqueue[front]<<" ";
         front++;
      }
   }
   cout<<endl;
		
			}
			
			
			
			
			
			 int main()
			 { 
			 do{
//			 cout<<"enter the queue size\n";
//			 cin>>cqueue[size];
			 	cout<<"--------------	circular queue operations ----------\n";
			 	cout<<"1. insert\n";
			 	cout<<"2. delete \n";
			 	cout<<"3. display \n";
			 	cout<<"4.quit\n";
			 	cout<<"enter your choice\n";
			 	cin>>ch;
			 	switch(ch)
			 	{
			 		case 1: insert( ele);
			 				break;
			 		case 2: deleteEle();
			 				break;
			 		case 3 : display();
			 				break;
			 		case 4:
					 // quit();
					  break;
			 		case 5 : 
			 		default:
			 			cout<<"inavalid selection\n";
				 }
//				 cout<<"enter 1 to continue and 0 to exit\n";
//				 cin>>con;
			}while (ch!=0);
			 }
