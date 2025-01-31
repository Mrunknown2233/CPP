#include <iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout<<"\nConstructor for Base class ";
		}
};

class Derived : public Base
{
	public:
		Derived()
		{
			cout<<"\nConstructor for Derived Class ";
		}
};

int main()
{
	Base bobj;
	Derived dobj;
	return 0;
}
