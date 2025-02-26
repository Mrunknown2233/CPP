#include <iostream>
using namespace std;
class Calci
{
	public :
			int add(int a, int b)
			{
				cout<<"\nAdd of int called ! ";
				return a + b;
			}

			double add(double a, double b)
			{
				cout<<"\nAdd of double called !";
				return a + b;
			}
};

int main()
{
	Calci c;
	cout<<c.add(10,20);
	cout<<c.add(24.11,20.0);
	
	return 0;
}
