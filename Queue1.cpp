//Linked List Implementation of Queue...
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

class Queue1
{
	struct node
	{
		int info;
		node *next;
	}*front,*rear,*ptr,*i,*x;
	
    public:
    	Queue1()
    	{
    		front=rear=NULL;
		}
		void insertion();
		void deletion();
		void display();
		
};

void Queue1::insertion()
{
	int no;
	std::cout<<"\n Enter A Number: \n";
	std::cin>>no;
	ptr=new node;
	ptr->info=no;
	ptr->next=NULL;
	
	if(front==NULL)
	{
		front=ptr;
		rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
	std::cout<<"\n New Node Inserted....\n";
}

void Queue1::deletion()
{
	if(front==NULL)
	{
		std::cout<<"\n Queue is empty...";
	}
	else
	{
		x=front;
		std::cout<<front->info<<"\t This node is deleted";
		front=front->next;
		delete x;
	}
	
	
}


void Queue1::display()
{
	if(front==NULL)
	{
		std::cout<<"\n Queue is empty....";
	}
	else
	{
		std::cout<<"\n Queue is :";
		for(i=front;i!=NULL;i=i->next)
		{
			std::cout<<"\t"<<i->info;
		}
	}
}

int main()
{
	int ch;
	Queue1 q;
	std::cout<<"*******Queue Implementation using Linked List********";
	std::cout<<"\n 1.Insertion";
	std::cout<<"\n 2.Deletion";
	std::cout<<"\n 3.Display";
	std::cout<<"\n 4.exit";
	
	while(ch!=0)
	{
		std::cout<<"\n Enter Your Choice";
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
			        
			default:
					std::cout<<"\nWrong Choice...";		 		  		 	     
		}
		
	
	}
		return 0;
		//getche();
	
}
