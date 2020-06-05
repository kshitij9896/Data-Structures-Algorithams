#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>

int top=-1;                //empty stack

class Stack

{
       int a[10],n;
	public:
	        void push();
			void pop();
			void peep();
			void change();
			void display();   	
};

void Stack::push()
{
	if(top==10-1)
	{
		std::cout<<"\n Stack is Full....";
	}
	else
	{
		std::cout<<"\n Enter a Element to push";
		std::cin>>n;
		top++;
		a[top]=n;
	}
	
}

void Stack::pop()
{
	if(top==10-1)
	{
		std::cout<<"Stack is Empty...";
		
	}
	else
	    {
	    	int no=a[top];
	    	std::cout<<"\n The Popped element is \n "<<no;
	    	top--;
		}
}

void Stack::peep()
{
	if(top==-1)
	{
		std::cout<<"\n Stack is Empty.. ";
	
	}
	else
	{
		std::cout<<"Top element is in \n"<<a[top];
	}
}

void Stack::change()
{
	int no,i;
	if(top==-1)
	{
		std::cout<<"Stack is Empty...";
	}
	else
	{
		std::cout<<"Enter a no and position greater than eual to zero";
		std::cin>>no>>i;
		a[i-1]=no;
	}
}

void Stack::display()
{
	if(top==-1)
	{
		std::cout<<"Stack is Empty....";
	}
	else
	{
		std::cout<<"Stack Elements Are...:";
		for(int i=top;i>=0;i--)
		{
			std::cout<<a[i];
		}
	}
}


int main()
{
	int ch;
	Stack s;
	std::cout<<"*****Stack Operations******";
	std::cout<<"\n 1.Push ";
	std::cout<<"\n 2.Pop ";
	std::cout<<"\n 3.Peep";
	std::cout<<"\n 4.Change";
	std::cout<<"\n 5.Display";
	std::cout<<"\n 6.Exit";
	
	while(ch!=0)
	{ 
	    
		std::cout<<"\n Enter Your Choice...\n";
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
			          s.peep();
					  break;
			case 4:
			          s.change();
					  break;
			case 5:
			          s.display();
					  break;
			case 6:
			         exit(0);
			
			default:
			       std::cout<<"\n Wrong Choice...";         
					 		  		  		  		 	     
		}
		
	}
	return 0;
}
