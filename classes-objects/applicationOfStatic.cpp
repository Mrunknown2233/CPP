#include <iostream>
#include <string.h>

using namespace std;

#define MAX 50

class Student
{
	private :
		int enrollmentNumber = 0;
		int rollNumber = 0;

		char name[MAX];
		char branch[MAX];
	
		static int enrollmentCounter;
		static int compsCounter;
		static int roboticsCounter;

	public:
		void accept()
		{
			cout<<"\nEnter the name and branch : ";
			cin>>name>>branch;

			if(strcasecmp(branch,"comps")==0) //depending upon the compiler 'strcmpi' or strcasecmp can be used here 
			{
				//compsCounter++;
				rollNumber = ++compsCounter;
			}
			else
			{
				//roboticsCounter++;
				rollNumber = ++roboticsCounter;
			}

			//enrollmentCounter++;
			enrollmentNumber = ++enrollmentCounter;

		}

		void display()
		{
			cout<<"\nEnrollment Number : "<<enrollmentNumber;
			cout<<"\nRoll Number : "<<rollNumber;
			cout<<"\nName : "<<name;
			cout<<"\nBranch : "<<branch;
		}
};


int Student::enrollmentCounter = 0;
int Student::compsCounter = 0;
int Student::roboticsCounter = 0;

int main()
{
	Student s1,s2,s3;

	s1.accept();
	s2.accept();
	s3.accept();

	s1.display();
	s2.display();
	s3.display();

	return 0;
}


