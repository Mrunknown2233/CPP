#include <iostream>
using namespace std;

class Sample
{
	public:
		static int staticCount; //static keyword is used to make a variable static
		int count = 0;
		

		void display()
		{
			cout<<"\nCount : "<<count<<endl;  //endl and \n are used to go to next linee
			cout<<"\nStatic Count : "<<staticCount;
		}
};

//Special way to initialize static variable 
int Sample::staticCount = 0;

int main()
{
	Sample s1,s2,s3;

	s1.staticCount = 100;

	s2.count = 5;
	s2.display();

	Sample::staticCount = s3.staticCount * 5;
	s3.display();

	cout<<"\nStatic Count in main : "<<Sample::staticCount;
return 0;
}
