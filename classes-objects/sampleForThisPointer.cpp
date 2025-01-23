#include <iostream>

using namespace std;


class Person
{
	private:
		int age;
		char name[50];
	public:
		void accept()
		{
			cout<<"\nEnter age and name : ";
			cin>>age>>name;
		}

		void display()
		{
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<age;
		}

		Person findElder(Person other)
		{
			if (age < other.age)
				return other;

			return *this;
		}

};


int main()
{
	Person p1,p2,p3;
	
	cout<<"\nEnter the deatils for 2 persons 1 by 1 : ";
	p1.accept();
	p2.accept();
	
	cout<<"\nEldest amoung the 2 persons is : ";
	p3 = p1.findElder(p2);
	p3.display();

}

