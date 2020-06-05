//Queue program using array....staic queue
#include<iostream>
#include<conio.h>
#include<stdlib.h>

int front=-1,rear=-1;
class Queue
{
	int no,q[5];
	
  public:
           void insertion();
		   void deletion();
		   void display();	
};

void Queue::insertion()
{
	std::cout<<"\n Enter Any Number....\n";
	std::cin>>no;
	
	  if (rear==5-1)
	  {
	  	std::cout<<"\n Queue is Full \n";
	  }
	  else
	  {
	  	rear++;
	  	q[rear]=no;
	  	if(front==-1)
	  	   front++;
	  	   std::cout<<"\n Node Inserted....";
	  }
	
}

void Queue::deletion()
{
	if(front==-1)
	{
		std::cout<<"\n Queue is Empty....\n";
	}
	else
	{
	
	 no=q[front];
	 std::cout<<"\n Node Deleted"<<no;
	 front++;
   }
  if(front>rear)
  {
  	front=rear=-1;
  }
   
}

void Queue::display()
{
	if(front==-1)
	{
		std::cout<<"\n Queue is empty";
	}
	else
	{
		std::cout<<"\n Queue is :";
		for(int i=front;i<=rear;i++)
		{
			std::cout<<"\n\n"<<q[i];
		}
	}
}

int main()
{
	int ch;
	Queue q;
	std::cout<<"\nQueue Operstions....";
	std::cout<<"\n1.Insertion";
	std::cout<<"\n2.Deletion";
	std::cout<<"\n3.Dispay";
	std::cout<<"\n4.exit";
	while(ch!=0)
	{
		std::cout<<"\nEnter Your Choice";
		std::cin>>ch;
		switch(ch)
		{
			case 1:
				      q.insertion();
				      break;
			case 2:
			      	  q.deletion();
						break;
			case 3:
			          q.display();
					  break;
			
			case 4:
				      exit(0);
				      break;
			
			default:
				std::cout<<"\nWrong Choice";
					  					      
		}
		
	}
	getche();
	return 0;
}
