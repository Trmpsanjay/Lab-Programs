#include<iostream>

using namespace std;
class xyz;
class abc
{
	int a;
	public:
		void setvalue(int x)
		{
			a=x;
		}
		friend void max( abc,xyz);
};

class xyz
{
	int b;
	public:
		void setvalue(int y)
		{
			b=y;
		}
		friend void max(abc,xyz);
};

void max( abc p,xyz q)
{
	if(p.a>q.b)
	
		cout<<"\nClass abc Variable has greater value and value is : "<<p.a<<endl;

	else
		cout<<"\nClass xyz Variable has greater value and value is : "<<q.b<<endl;
};

int main()
{
	abc d;
	xyz e;
	d.setvalue(54);
	e.setvalue(87);
	max(d,e);
	d.setvalue(65);
	e.setvalue(32);
	max(d,e);
}
