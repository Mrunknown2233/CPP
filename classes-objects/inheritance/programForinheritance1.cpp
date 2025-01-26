/*
write a C++ program to create a class Student having data members rollNo and name.
Derive a class Marks from students.
*/


#include <iostream>
#define MAX 50
using namespace std;

class Student
{
    private :
            int rollNo;
            char name[MAX];
    public:
            void acceptStudent()
            {
                cout<<"\nEnter rollNumber and name : ";
                cin>>rollNo>>name;
            }

            void displayStudent()
            {
                cout<<"\n====Student Details ====";
                cout<<"\nRoll Number = "<<rollNo;
                cout<<"\nName =  "<<name;
            }

};

class Marks : public Student
{
    private:
            float m1,m2,m3,total,percentage;

            void calculateResult()
            {
                total = m1+m2+m3;
                percentage = total/3;  //(total/300)*100
            }
    public:
            void acceptMarks()
            {
                cout<<"\nEnter marks for 3 subjects (out of 100)";
                cin>>m1>>m2>>m3;
            }
            void displayMarks()
            {
                calculateResult();
                cout<<"\nMarks 1 = "<<m1;
                cout<<"\nMarks 2 = "<<m2;
                cout<<"\nMarks 3 = "<<m3;
                cout<<"\nTotal = "<<total;
                cout<<"\nPercentage = "<<percentage;
            }

};



int main()
{
    Marks m;
    m.acceptStudent();
    m.acceptMarks();

    m.displayStudent();
    m.displayMarks();
    return 0;
}

