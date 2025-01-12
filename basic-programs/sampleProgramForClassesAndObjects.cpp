#include <iostream>
using namespace std;

class Student
{
	private : 
		int rollNo;
		char name[50];
	public:
		void setData()
		{
			cout<<"\nEnter the roll number : ";
			cin>>rollNo;
			cout<<"\nEnter the first name  : ";
			cin>>name;
		}

		void getData()
		{
			cout<<"\nStudent Details : ";
			cout<<"\nRoll Number : "<<rollNo;
			cout<<"\nName : "<<name;
		}
};

int main()
{
	Student s1,s2,s3;

	s1.setData();
	s2.setData();
	s3.setData();

	s1.getData();
	s2.getData();
	s3.getData();
}
