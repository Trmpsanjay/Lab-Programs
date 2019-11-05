#include<iostream>

using namespace std;
#define maxsize 10
	int STACK[maxsize],top;
	
	int initStack()   // stack initiallisation
	{
		top=-1;
	}
	int isFull()  // checking stack is full or not
	{
		if(top==maxsize-1)
		return 1;
		else
		return 0;
	}
	
	int isEmpty()  // checking stack is empty or not
	{
		if(top==-1)
		{
			return 1;
		}
		else
		return 0;
		
	}
	
	void push(int num)   // for inserting number
	{
		if(isFull())
		{
			cout<<"Stack is full"<<endl;
		}
		else
		{
			top=top+1;
			STACK[top]=num;
			cout<<"Number has been inserted \n";
		}
	}


void pop()        // for deleting the elements
{
	if(isEmpty())
	cout<<"Stack is Empty\n";
	else
	{
		int temp;
		temp=STACK[top];
		top--;
	}
}

void display()
{
	if(isEmpty())
	cout<<"Stack is Empty\n ";
	else
	{
		for(int i=top;i>=0;i--)
		cout<<STACK[i]<<endl;
	}
}


int main()
{
	int num;
	initStack();
	char ch;
	do{
		int a;
		cout<<"Choose option\n 1.push \n 2.pop \n 3.display"<<endl;
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"Enter number to be inserted\n";
				cin>>num;
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
				
			default:
				cout<<"Invalid Option"<<endl;
		}
		cout<<"Do You Want to continue ? "<<endl;
		cin>>ch;
	}
	while(ch=='Y' || ch=='y');
	return 0;
	}
