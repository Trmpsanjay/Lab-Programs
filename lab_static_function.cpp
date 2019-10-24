#include<iostream>

using namespace std;


class test
{
	int code;
	static int count;
	public:
		void setcode()
		{
			code=++count;
		}
		void showcode()
		{
			cout<<" Object No :"<<code<<endl;
		}
		static void show_count()
		{
			cout<<"Count :"<<count<<endl;
		}
};

int test :: count;

int main()
{
	test t1,t2;
	t1.setcode();
	t2.setcode();
	test::show_count();
	test t3;
	t3.setcode();
	test::show_count();
	t1.showcode();
	t2.showcode();
	t3.showcode();
}
