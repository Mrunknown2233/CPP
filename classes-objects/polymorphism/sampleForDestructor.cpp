#include <iostream>

using namespace std;

class Sample
{
	public:
		Sample()
		{
			cout<<"\nDefault Constructor !";
		}

		~Sample()
		{
			cout<<"\nDestructor Called !";
		}

};

void timepass()
{
	Sample s;
}
int main()
{

	Sample s;
	timepass();
return 0;
}

