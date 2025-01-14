#include <iostream>

using namespace std;

class Sample
{
	private : 
		int intVar;
		float floatVar;

	public:
		Sample(int a)
		{
			cout<<"\nInt parameterized Constructor ";
			intVar = a;
			floatVar = 0;
		}

		Sample(float b)
		{
			cout<<"\nFloat parameterized Contructor ";
			intVar = 0;
			floatVar = b;
		}

		Sample(int a, float b)
		{
			cout<<"\nParameterized Contructor with 2 arguments ";
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
	Sample s1(10); //calling for contructor with only a int arg
		   

	/*As there is only a float arg in the contructor then the compiler gets ambiguity 
	 * regarding which contructor to choose because if the float no is given hardcoded like here 24.11 then it thinks of it as a double rather than a float
	 * and then searched for a double constructor which isnt present ginving an error
	 * So to avoid it we need to specify that it is a float value by 24.11f or 24.11F
	 */

	Sample s2(24.11F); //or this can be written as s2(24.11f) which are the same thing and are calling for contructor with only a float arg;
	
	Sample s3(24,11.42);


	s1.display();
	s2.display();
	s3.display();

return 0;
}


