#include <iostream>

using namespace std;

class Box
{
	private:
		int width,height,dept;
	public:
		Box(int width, int height , int dept)
		{
			this->width  = width;
			this->height =  height;
			this->dept = dept;
		}

		int volume()
		{
			return width*height*dept;
		}

		void show()
		{
			cout<<"\n====BOX====";

			cout<<"\nWidth = "<<this->width;
			cout<<"\nHeight = "<<this->height;
			cout<<"\nDept = "<<this->dept;
		}

};


class BoxWeight : public Box
{
	private : 
		int weight;

	public:
		BoxWeight(int w, int h, int d, int we) : Box(w,h,d)
		{
			this->weight = we;
		}
		

		void displayBoxWeight()
		{
			show();
			cout<<"\nWeight =  "<<weight;
		}
};

int main()
{
	BoxWeight bw(10,20,30,5);
	bw.displayBoxWeight();
	cout<<"\nVolume = "<<bw.volume();

	return 0;
}
		
