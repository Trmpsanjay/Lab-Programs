#include<iostream>

using namespace std;

class B
{
	int a;
	public:
		int b;
		void get_ab()
		{
			a=5;
			b=10;
		}
		int get_a()
		{
		 return a;	
		}
		
		void put_ab()
		{
			cout<<" a: "<<a<<endl;
			cout<<" b: "<<b<<endl;
		}
};

class D : public B
{
	int c;
	public:
		void mull()
		{
			c=b*get_a();
		}
		
		void display()
		{
			cout<<"a= "<<get_a()<<endl;
			cout<<"b= "<<b<<endl;
			cout<<" c= "<<c<<endl;
		}
};


int main()
{
	D d;
	d.get_ab();
	d.mull();
	d.display();
	d.b=200;
	d.mull();
	d.display();
	return 0;
}
