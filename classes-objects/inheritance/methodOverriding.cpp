#include <iostream>

using namespace std;

class Base
{
	public: 
		Base()
		{
			cout<<"\nInside the Base Class ";
		}

		void show()
		{
			cout<<"\nShow function for Base Class ";
		}

};

class Derived 
{
	public:
		Derived()
		{
			cout<<"\nInside the Derived Class ";
		}

		void show()
		{
			cout<<"\nShow function for Derived Class ";
		}
};


int main()
{
	cout<<"\nFor Base Class : ";
	Base bobj;
	bobj.show();

	cout<<"\nFor Derived Class : ";
	Derived dobj;
	dobj.show();

	return 0;
}
