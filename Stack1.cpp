//Implementation of stack using linkedlist
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
class Stack1
{
	struct node
	{
		int info;
		node *next;
	}*top,*ptr,*x,*i;

public:
Stack1()
{
	top==NULL;
	}	
void push();
void pop();
void display();	
};

void Stack1::push()
{
	
	int no;
	std::cout<<"\n Enter a Number...";
	std::cin>>no;
	ptr=new node;
	ptr->info=no;
	ptr->next=NULL;
		
	if(top==NULL)
	{
		top=ptr;
		
	}
	else
	{
		ptr->next=top;
		top=ptr;
	}
	std::cout<<"\n New Node Inserted.....";
}

void Stack1::pop()
{
	if(top==NULL)
	{
		std::cout<<"Stack is Empty....";
	}
	else
	{
		x=top;
		std::cout<<top->info<<"No deleted....";
		top=top->next;
		delete x;
	}
}

void Stack1::display()
{
	if(top==NULL)
	{
		std::cout<<"Stack is Empty....";
	}
	else
	{
		std::cout<<"Stack is :";
		for(i=top;i!=NULL;i=i->next)
		{
			std::cout<<""<<i->info;
		}
	}
}

int main()
{
	
	int ch;
	Stack1 s;
	std::cout<<"\n *******Stack Operations Using Linked List*******";
	std::cout<<"\n 1.Push";
	std::cout<<"\n 2.Peep";
	std::cout<<"\n 3.Display";
	std::cout<<"\n 4.Exit";
	
	while(ch!=0)
	{
		std::cout<<"\n Enter Your Choice...";
		std::cin>>ch;
		
		switch(ch)
		{
			case 1:
				   s.push();
				   break;
			case 2:
			       s.pop();
				   break;
			case 3:
			       s.display();
				   break;
			case 4:
			        exit(0);
					
			default:
			       std::cout<<"\n Wrong Choice.....";			    	   	   
		}
	}
	return 0;
}
