#include<iostream>


using namespace std;

class bank
{
	protected:
		char name[50],type[50];
		double acc_no;
		float deposit,withdrawl,balance;
	public:
		bank()
		{
			char *name= new char[60];
			char *type=new char[60];
			acc_no=0;
			balance=0;
		}
		void get_details()
		{
			cout<<"enter account holder name :";
			cin>>name;
			cout<<"\n Enter account type ";
			cin>>type;
			cout<<"\n Enter account number ";
			cin>>acc_no;
			cout<<"\n Enter Initial amount : ";
			cin>>balance;
		}
		
		void put_details()
		{
			cout<<" Name : "<<name<<endl;
			cout<<"Account type :"<<type<<endl;
			cout<<"Account Number : "<<endl;
		}
};

class saving : public bank
{
	public:
		void credit_saving()
		{
		cout<<"enter amount to be credited :";
		cin>>deposit;
		balance=balance+deposit;
		cout<<" \n your account has been succesfully creditted with :"<<deposit;
		cout<<"\n available balance in your account after credit is : "<<balance;
			
		}
		
		void debit_saving()
		{
			cout<<"enter amount to be debitted\n";
			cin>>withdrawl;
			if(balance<withdrawl)
			{
				cout<<"you don't have suifficient balance in your account\n";
				cout<<"available balance in your account is :"<<balance<<endl;
			}
			else
			{
			balance=balance-withdrawl;
			cout<<"\n your account has been succesfuilly debitted with :"<<withdrawl;
			cout<<"\n after debit available balance in account is : "<<balance;
			}
		}
		
};


class current: public bank
{
	public:
		void current_credit()
		{
		cout<<"enter amount to be credited :";
		cin>>deposit;
		balance=balance+deposit;
		cout<<" \n your account has been succesfully creditted with :"<<deposit;
		cout<<"\n available balance in your account after credit is : "<<balance;

		}
		
		void current_debit()
		{
			cout<<"enter amount to be debitted\n";
			cin>>withdrawl;
			if(balance<withdrawl)
			{
				cout<<"you don't have suifficient balance in your account\n";
				cout<<"available balance in your account is :"<<balance<<endl;
			}
			else
			{
			balance=balance-withdrawl;
			cout<<"\n your account has been succesfuilly debitted with :"<<withdrawl;
			cout<<"\n after debit available balance in account is : "<<balance;
			}
		}
		
		void penalty()
		{
			if(balance<1000)
			balance=balance-100;
		}
};


int main()
{
	int n,i;;
	
	cout<<"******************************Banking*********************"<<endl;
	cout<<"\n 1. Saving n\n 2.Current "<<endl;
	cin>>n;
	saving s;
		current c;
	
		switch(n)
		{
			case 1:
				 
				s.get_details();
				s.put_details();
				int choice;
				cout<<"\n 1.Credit \n 2. Debit"<<endl;
				cin>>choice;
				if(choice==1)
				{
					s.credit_saving();
					break;
				}
				else if(choice==2)
				{
				s.debit_saving();
				break;}
				else
				{				
				 cout<<"envalid option"<<endl;
				 break;
				}
				break;
			case 2:
			
				c.get_details();
				c.put_details();
				c.penalty();
				cout<<"\n 1.Credit \n 2. Debit"<<endl;
				cin>>choice;
				
				if(choice==1)
				{
					c.current_credit();
					break;
				}
				else if(choice==2)
				{
				c.current_debit();
				break;
			}
				else
				{				
				 cout<<"envalid option"<<endl;
				 break;
				}
				cout<<"Check Book facility available;";
				break;
			}

}
