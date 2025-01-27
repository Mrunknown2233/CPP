#include <iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"\nBase Constructor ";
        }

        void show()
        {
            cout<<"\nShow of Base Class ";
        }

};


class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"\nDerived Constructor";
        }

        void show()
        {
            cout<<"\nShow of Derived Class";
        }
};

int main()
{
    Base b;
    Derived d;

    //Derived class has overridden show 
    b.show();
    d.show();

    return 0;
}
