#include<iostream>

using namespace std;

class sample
{
	float a,b;
	public:
		void setvalue()
		{
			a=25;
			b=75;
		}
		
		friend float mean(sample s );
};

float mean(sample s)
{
	return float (s.a+s.b)/2;
}

int main()
{
sample c;
	c.setvalue();
	cout<<" mean value: "<<mean(c);
	
}
