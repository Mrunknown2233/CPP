#include <iostream>
using namespace std;

#define MAX 100
class Book
{
	private :
		int isbn;
		char name[MAX];
		char author[MAX];
	public:
		void display()
		{
			cout<<"\nBook Details : ";
			cout<<"\nISBN : "<<isbn;
			cout<<"\nBook Name : "<<name;
			cout<<"\nAuthor Name : "<<author;
		}
		void accept()
		{
			cout<<"\nEnter the book's ISBN : ";
			cin>>isbn;
			cout<<"\nEnter the book's name : ";
			cin>>name;
			cout<<"\nEnter the book's author : ";
			cin>>author;
		}
};



int main()
{
	Book b[5];
	int i = 0;

	//accepting details for the books
	cout<<"\nEnter the books detail : \n";
	for(i = 0 ; i < 5 ; i++)
	{
		cout<<"\nFor book "<<i+1<<" : ";
		b[i].accept();
	}


	for(i = 0 ; i < 5 ; i++)
	{
		cout<<"\nFor book "<<i+1<<" : ";
		b[i].display();
	}


return 0;
}

