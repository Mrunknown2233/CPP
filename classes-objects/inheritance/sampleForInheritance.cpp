#include <iostream>
using namespace std;
class Box
{
	private:
		int width,height,depth;
	
	public:
		void accept()
		{
			cout<<"\nEnter width heigth and depth : ";
			cin>>width>>height>>depth;
		}

		void display()
		{
			cout<<"\n====BOX DETAILS ====";
			cout<<"\nWidth = : "<<width;
			cout<<"\nHeight = : "<<height;
			cout<<"\nDepth = : "<<depth;
		}

		int volume()
		{
			return width*height*depth;
		}
};


class BoxWeight : public Box
{
	private :
		int weight;
	public:
		void acceptWeight()
		{
			cout<<"\n Enter weight : ";
			cin>>weight;
		}

		void displayWeight()
		{
			cout<<"\nWeight : "<<weight;
		}
};


int main()
{
	Box b;
	BoxWeight bw;

	cout<<"\nSizeof(b) = "<<sizeof(b);
	cout<<"\nSizeof(bw) = "<<sizeof(bw);
	

	b.accept();

	bw.accept();
	bw.acceptWeight();

	b.display();
	cout<<"\nVolume of b : "<<b.volume();

	bw.display();
	bw.displayWeight();

	cout<<"\nVolume of bw : "<<bw.volume();
}




