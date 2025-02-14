#include <iostream>
using namespace std;

class Shape
{
    private:
        int side1,side2;
    public:
        void setSide(int side)
        {
            this->side1 = this->side2 = side;
        }

        void setSides(int side1, int side2)
        {
            this->side1 = side1;
            this->side2 = side2;
        }

        void displaySides()
        {
            cout<<"\nSide1 = "<<this->side1;
            cout<<"\nSide2 = "<<this->side2;
        }

        int getSide1(){ return this->side1;}
        int getSide2(){ return this->side2;}

        virtual void area() = 0;
        virtual void perimeter() = 0;
};


class Rectangle : public Shape
{
    public : 
    void area()
    {
        int area = getSide1() * getSide2();

        cout<<"\nArea of rectangle : "<<area;
    }

    void perimeter()
    {
        int perimeter = 2 *(getSide1() * getSide2());
        cout<<"\nPerimeter of rectangle : "<<perimeter;
    }
};


class Square :  public Shape
{
    public: 
        void area()
        {
            int area  = getSide1() + getSide1();
            cout<<"\nArea of square : "<<area;
        }

        void perimeter()
        {
            int perimeter =  4 * getSide1();
            cout<<"\nPerimeter of square : "<<perimeter;
        }
};


int main()
{
    //Shape s; won't work


    Rectangle r;
    Square s;

    r.setSides(24,11);
    s.setSide(11);

    r.area();
    r.perimeter();

    s.area();
    s.perimeter();
}