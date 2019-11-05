#include<iostream>

using namespace std;


class student
{
	protected:
		char name[40];
		int roll_number;
	public:
		void get_student_details()
		{
			cout<<"Enter Name : "<<endl;
			cin>>name;
			cout<<"Enter Roll Number : "<<endl;
			cin>>roll_number;
		}
		
		void put_students_details()
		{
			cout<<" Name : "<<name<<endl;
			cout<<"Roll number : "<<roll_number<<endl;
		}
};

class test: public student
{
	protected:
		float sub1,sub2;
	public:
		void get_marks(float x,float y)
		{
			sub1=x;sub2=y;
		}
		void put_marks()
		{
			cout<<"Marks in Subject 1 : "<<sub1<<endl;
			cout<<"Marks in Subject 2 : "<<sub2<<endl;
		}
};

/* class sports: public student
{
	protected:
		float score;
	public:
		void get_score(float s)
		{
			score=s;
		}
		
		void put_score()
		{
			cout<<"Score Weightage is : "<<score;
		}
		
};*/

class result: public test
{
	private:
		float	total;
	public:
		void get_result()
		{
			total=sub1+sub2;
			cout<<"Total Marks Obtained is : "<<total<<endl;
		}
	
};


int main()
{
	result r;
	r.get_student_details();
	r.get_marks(65.99,34.01);
	r.put_students_details();
	r.get_result();
}
