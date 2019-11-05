#include<iostream>


using namespace std;


class M
{
	protected:
		int m;
	public:
		void get_m()
		{
			m=5;
		}
};

class N
{
	protected:
		int n;
	
	public:
		void get_n()
		{
			n=10;
		}
};

class P: public M, public N
{
	public:
		void display()
		{
			cout<<" M =  "<<m<<endl;
			cout<<" N = "<<n<<endl;
			cout<<" M*N = "<<m*n<<endl;
			
		}
};

int main()
{
	P p;
	p.get_m();
	p.get_n();
	p.display();
}
