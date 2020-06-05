#include<iostream>
#include<conio.h>
#include<stdio.h>
int main()
{
	//clrscr();
	
	int a[5],no;
	std::cout<<"Enter your number";
	std::cin>>no;
	for(int i=0;i<5;i++)
	{
		std::cin>>a[i];
	}
	
	std::cout<<"The Numbers are:a[i]";
	
	std::cout<<"The Numbers are:";
		for(int i=0;i<5;i++)
		{
			std::cout<<a[i];
	   }
	
	return 0;
}
