#include <iostream>
using namespace std;

#define MAX 10
#define NEG_INF -32768


class Stack 
{
	private :
		int top;
		int items[MAX];

		int isFull()
		{
			return top ==MAX-1;
		}

		int isEmpty()
		{
			return top == -1;
		}

	public:
		Stack()
		{
			top=-1;
		}

		void push(int element)
		{
			if(isFull())
			{
				cout<<"\nStack Overflown ";
				return;
			}

			items[++top] = element;
		}

		int pop()
		{
			if(isEmpty())
			{
				cout<<"\nStack Underflow !";
				return NEG_INF;
			}

			return items[top--];
		}
		

		void display()
		{
			if(isEmpty())
				cout<<"\nStack is Empty ";
			else 
			{
				cout<<"\nStack contains: ";
				for(int i = top ; i>-1; i--)
					cout<<items[i]<<" ";
			}
		}
};

int main()
{
	Stack s1,s2;


	s1.push(10);
	s1.push(20);
	s1.push(30);

	s1.display();

	s2.display();

	return 0;
}

