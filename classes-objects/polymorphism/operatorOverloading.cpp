#include <iostream>
#include <math.h>

using namespace std;


class Complex
{
	private: 
		int real,imag;
	public:
		void accept()
		{
			cout<<"\nEnter real and imag part : ";
			cin>>real>>imag;
		}

		void display()
		{
			cout<<"\nComplex Number  : "<<real;
			cout<<(imag <  0 ? " - " : " + ")<<abs(imag) <<"i";
		}

		Complex operator + (Complex other)
		{
			Complex temp;

			temp.real = this->real + other.real;
			temp.imag = this->imag + other.imag;
			
			return temp;
		}
		
		int operator ==(Complex other)
		{
			return (this->real == other.real && this->imag + other.imag );
		}
};
int main()
{
	Complex c1,c2,c3;

	c1.accept();
	c2.accept();

	c3 = c1 + c2;
	c3.display();

	if(c1 == c2)
		cout<<"\nBoth are equal";
	else
		cout<<"\nBoth are not equal";
	return 0;
}
