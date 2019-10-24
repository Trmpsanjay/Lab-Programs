#include<iostream>
#include<iomanip>

using namespace std;

class student 
{
	private:
		int age;
		char name[50];
	public:
		void getdata()
		{
			cout<<"Enter name and age \n";
			cin>>name>>age;
		}
		void putdata()
		{
			cout<<"Name : "<<setw(25)<< " Age : "<<endl;
			cout<<name<<setw(25)<<age;
		}
	
};

int main()
{
	student s1;
	s1.getdata();
	s1.putdata();
}
