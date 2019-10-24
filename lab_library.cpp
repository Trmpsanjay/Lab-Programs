#include<iostream>
#include<iomanip>
#include<string.h>

using namespace std;

class library
{
	private:
		char title[50][50];
		char author[50][50];
		char publisher[50][50];
		float price[50],total;
		int stock[50],n,copies;
	public:
		void getdata()
		{
		   cout<<"enter the no of books to be feeded\n ";
		   cin>>n;
		   for(int i=0;i<n;i++)
		   {
		   	 cout<<"Enter Title of the book :";
		   	 cin>>title[i];
		   	 cout<<"\n enter the Author of the book :";
		   	 cin>>author[i];
		   	 cout<<"\n Enter publisher of the book : ";
		   	 cin>>publisher[i];
		   	 cout<<"\n Enter Price of the book : ";
		   	 cin>>price[i];
		   	 cout<<"\n enter available stock of book :";
		   	 cin>>stock[i];
		   }	
		}
		
		void putdata()
		{
			cout<<"Title "<<setw(15)<<"Author"<<setw(15)<<"Publisher"<<setw(15)<<"Price"<<setw(15)<<"Stock"<<endl;
			for(int i=0;i<n;i++)
			{
					cout<<title[i]<<setw(15)<<author[i]<<setw(15)<<publisher[i]<<setw(15)<<price[i]<<setw(15)<<stock[i]<<endl;
			}
		}
		
		void search(char a[],char b[])
		{
			for(int i=0;i<n;i++)
			{
				if(strcmp(title[i],a)==0 && strcmp(author[i],b)==0)
				{
					cout<<"\nBooks availble "<<endl;
					cout<<"\n Title "<<setw(15)<<"Author"<<setw(15)<<"Publisher"<<setw(15)<<"Price"<<setw(15)<<"Stock"<<endl;
					cout<<title[i]<<setw(15)<<author[i]<<setw(15)<<publisher[i]<<setw(15)<<price[i]<<setw(15)<<stock[i]<<endl;
					cout<<"\n Enter the number of books you want";
					cin>>copies;
					if(stock[i]<copies)
					{
						cout<<"\n  Sorry This much stock is not available";
						cout<<"\n We have only : "<<stock[i]<<" copies ";
					}
					else
					{
						cout<<"\n We have available Stock";
						total=copies*price[i];
						cout<<"\n Total Price of book is :  "<<total;
					}
				}
			}
					cout<<" \n Sorry We Don't have this book in our shop";
				
		}
};


int main()
{
	library b;
	char search_title[50],search_author[50];
	b.getdata();
	b.putdata();
	cout<<"\n Enter title and author name to be searched : ";
	cin>>search_title>>search_author;
	b.search(search_title,search_author);
}
