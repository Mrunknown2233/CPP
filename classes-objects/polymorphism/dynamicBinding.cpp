#include <iostream>
using namespace std;

class Base
{
	private : 
		int a;
	public :
		Base(int a)
		{
			this->a = a;
		}
	
		virtual void show()
		{
			cout<<"\nBase's a = "<<a;
		}
};


class Derived : public Base
{
	private : 
		int a;

	public:
		Derived() : Base(12)
		{
			a = 200;
		}

		void show()
		{
			cout<<"\nDerived's a = "<<a;
		}


		void display()
		{
			cout<<"\nDerived's a = "<<a;
		}
};


int main()
{
	Base *ptr;
	Base b(100);
	Derived d;
	
	ptr = &b;
	ptr->show();

	ptr = &d;
	ptr->show();

	//ptr->display() ->gives error;

	return 0;
}
