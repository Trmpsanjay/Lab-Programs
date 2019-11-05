#include<iostream>

using namespace std;


class complex
{
	private:
		float imag,real;
	public:
		complex(float x,float y)
		{
			real=x;
			imag=y;
		}
		complex()
		{}
		complex operator +(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
		
		void display()
		
		{
			cout<<real<<"+j"<<imag<<endl;
		} 
};

int main()
{
	complex c1(2.5,3.6);
	complex c2(1.5,1.4);
	c1.display();
	c2.display();
	complex c3=c1+c2;
	c3.display();
	
}
