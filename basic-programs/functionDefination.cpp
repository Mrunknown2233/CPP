#include <iostream>
using namespace std;

class Book
{
	/*Default Access Specifier in CPP is private */

		int isbn;
		char name[50];
		char author[50];

	public: 
		void display()
		{
			cout<<"\nBook Details : ";
			cout<<"\nISBN : "<<isbn;
			cout<<"\nName : "<<name;
			cout<<"\nAuthor : "<<author;
		}
		void accept(); //forward declaration for the function which is to be defined outside the class
};

void Book::accept()
{
	cout<<"\nEnter the ISBN of the book : ";
	cin>>isbn;
	cout<<"\nEnter the name of the book : ";
	cin>>name;
	cout<<"\nEnter the name of the author : ";
	cin>>author;
}

int main()
{
	Book b1,b2;

	b1.accept();
	b2.accept();

	b1.display();
	b2.display();

	return 0;
}
	
