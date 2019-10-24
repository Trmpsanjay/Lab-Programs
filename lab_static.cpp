#include<iostream>

using namespace std;

class item
{
	private:
		static int count;
		int number;
	public:
		void getdata(int a)
		{
			count=a;
			cout<<"Count : "<<count<<endl;
		}
		void getcount()
		{
			cout<<"Count : "<<count<<endl;
		}
		
};

int item :: count;
int main()
{
	item a, b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	cout<<"After reading data :\n";
	a.getdata(100);
	b.getdata(200);
	c.getdata(300);
}

