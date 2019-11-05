#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class book
{
	private:
		char author[50],title[50],publisher[50];
		float price,total;
		int size,stock,copies;
	public:
		book()
		{
			char *author= new char[60];
			char *title=new char [60];
			char *publisher=new char [60];
			price=0;
			stock=0;
	    }
	    
	    void get_data()
	    {
				cout<<"\n Enter Title,Author and Publisher Name :";
	    		cin>>title>>author>>publisher;
	    		cout<<"\n Enter Price and Stock of the Book :";
	    		cin>>price>>stock;
		}
		
		void put_data()
		{
				cout<<title<<endl<<"\t \t :"<<author<<"\t \t :"<<publisher<<"\t \t"<<price<<"\t \t "<<stock<<endl;
		}
		
		int search_book(char a[],char b[])
		{
			if (strcmp(title,a) && strcmp(author,b))
				return 0;
			else
				return 1;
		}
		
		void nocopies(int n)
		{
			if(stock>n)
			{
				cout<<"\n Book available ";
				cout<<" price : "<<price<<"\n total : "<<n*price;
			}
			
			else
			{
				cout<<"\n Book Not available ";
			}
		}
};

int main()
{
	book b[100];
	char key_title[50],key_author[60];
	int n,size,flag=0,key=0,i,copies;
	do{
	
	cout<<"******************Book Store ********************\n";
	
	cout<<"press \n"<<" 1. Insert Book \n 2. Display \n 3. Search \n 4. Exit "<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"\n enter no of books to be feed";
			cin>>size;
			for(i=0;i<size;i++)
			{
				b[i].get_data();
			}
			break;
		case 2:
				cout<<"\n "<<"Title "<<"\t \t "<<"Author "<<"\t \t"<<"Publisher"<<"\t \t "<<"Price"<<"\t \t "<<"Stock";
				for(i=0;i<size;i++)
				{
					cout<<endl;
					b[i].put_data();
				}
				break;
		case 3:
			cout<<"enter title and author name to be searched"<<endl;
			cin>>key_title>>key_author;
			for(i=0;i<size;i++)
			{
			if(b[i].search_book(key_title,key_author))
				{
				flag=1;
				cout<<"\n "<<"Title "<<"\t \t "<<"Author "<<"\t \t"<<"Publisher"<<"\t \t "<<"Price"<<"\t \t "<<"Stock";
				b[i].put_data();
				key=i;
				}
			}
			if(flag==1)
			{
				cout<<"Book available"<<endl;
				cout<<"enter no of copies"<<endl;
				cin>>copies;
				b[key].nocopies(copies);
			}
			else
			cout<<"Book not available"<<endl;
	 		
			 break;
		case 4:
			exit(EXIT_SUCCESS);
			break;
		default:
			cout<<"Wrong Choice ";
			  
}
}

while(n!=5);

return 0;

}
