#include <iostream>

using namespace std;

class Sample
{
	private :
		int intVar;
		float floatVar;

	public:
		Sample(int a,float b)
		{
			cout<<"\nParameterized constructor called ";
			intVar = a;
			floatVar = b;
		}

		Sample(Sample  &obj) //example for copy constructor 
		{
			cout<<"\nCopy constructor called ";
			intVar = obj.intVar;
			floatVar = obj.floatVar;
		}


		void display()
		{
			cout<<"\nintVar = "<<intVar;
			cout<<"\nfloatVar = "<<floatVar;
		}

};

int main()
{
	Sample s1(10,20.3),s2(s1); //giving reference of another vairable as an argument to call copy constructor
	

	s1.display();
	s2.display();
return 0;
}


