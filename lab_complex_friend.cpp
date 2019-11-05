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
		friend complex operator +(complex c,complex d);
		
		void display()
		
		{
			cout<<real<<"+j"<<imag<<endl;
		} 
};
	complex operator +(complex c,complex d)
		{
			complex temp;
			temp.real=c.real+d.real;
			temp.imag=c.imag+d.imag;
			return temp;
		}

int main()
{
	complex c1(2.5,3.6);
	complex c2(1.5,1.4);
	c1.display();
	c2.display();
	complex c3=c1+c2;
	c3.display();
	
}
