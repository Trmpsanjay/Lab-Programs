#include<iostream>

using namespace std;


class banking
{
	private:
		int balance,debitted,creditted;
		
	public:
		void initialise()
		{
			cout<<"enter initial amount to be deposited in your account min 500\n";
			cin>>balance;
			while(balance<500)
			{
				cout<<"You have entered less than 500 please enter greater than 500\n";
				cin>>balance;
			
			}
		}
		
		void debit()
		{
			cout<<"enter amount to be debitted\n";
			cin>>debitted;
			if(balance<debitted)
			{
				cout<<"you don't have suifficient balance in your account\n";
				cout<<"available balance in your account is :"<<balance<<endl;
			}
			else
			{
			balance=balance-debitted;
			cout<<"\n your account has been succesfuilly debitted with :"<<debitted;
			cout<<"\n after debit available balance in account is : "<<balance;
			}
	}
	
	void credit()
	{
		cout<<"enter amount to be credited :";
		cin>>creditted;
		balance=balance+creditted;
		cout<<" \n your account has been succesfully creditted with :"<<creditted;
		cout<<"\n available balance in your account after credit is : "<<balance;
	}
};




int main()
{
	banking b;
	b.initialise();
	b.credit();
	b.debit();
	
}
