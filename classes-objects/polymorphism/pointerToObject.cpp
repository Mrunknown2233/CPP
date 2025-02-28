#include <iostream>
#include <cstring>

using namespace std;

class Student
{
	int rollNo;
	char name[50];

	public:
		void accept(int rollNo,char *name)
		{
			this->rollNo = rollNo;
			strcpy(this->name,name);
		}

		void display()
		{
			cout<<"\nRoll no  = "<<rollNo;
			cout<<"\n Name = "<<name;
		}
};



int main()
{
	Student s1,s2;
	Student *ptr;

	char name1[50] = "SOUMYA";
	char name2[50] = "ABC";

	ptr = &s1;
	ptr->accept(2411,name1);
	ptr->display();

	ptr  = &s2;
	ptr->accept(1142,name2);
	ptr->display();

	//calling display using objects
	
	s1.display();
	s2.display();

	return 0;
}

