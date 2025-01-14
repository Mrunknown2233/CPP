#include <iostream>
using namespace std;

class Sample
{
	private : 
		int intVar;
		float floatVar;
	public:
		Sample()
		{
			cout<<"\nConstructor Invoked !";
			intVar = 0;
			floatVar = 0;
		}

		void accept(int a, float b)
		{
			intVar = a;
			floatVar = b;
		}

		void display()
		{
			cout<<"\nintVar = "<<intVar;
			cout<<"\nfloatVar = "<<floatVar;
		}
};



int main()
{
	Sample s1,s2;

	s1.accept(3,24.11);
	s1.display();

	s2.display();
	s2.accept(24,11.42);
	s2.display();
return 0;
}
