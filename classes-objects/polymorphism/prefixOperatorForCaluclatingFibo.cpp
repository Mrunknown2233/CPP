#include <iostream>
using namespace std;
class Fibo
{
	private:
		int num;
	public:
		Fibo()
		{
			this->num=0;
		}
		void setValue(int a)
		{
			this->num=a;
		}
		int getValue()
		{
			return this->num;
		}
		Fibo operator ++()
		{
			//Given that the invoking operator will contain the no till which we want to generate the fibonnaci series
			if(this->num<0)
				cout<<"\nInvalid no for fibonnaci number";
			else
			{
				int a,b,c;
				a=0;
				b=1;
				if(a<=this->num)
					cout<<"\nFibonnaci series = "<<a;
				if(b<=this->num)
						cout<<" "<<b;
				for(int i=0;i<this->num-2;i++)
				{
					c=a+b;
					cout<<" "<<c;
					a=b;
					b=c;
				}
			}
			cout<<"\n";
			return *this;
		}
};

int main(void)
{
	Fibo f1;
	int num;
	cout<<"\nEnter value : ";
	cin>>num;
	f1.setValue(num);
	
	++f1;
}
			
			