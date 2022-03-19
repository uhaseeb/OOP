#include<iostream>
using namespace std;

class Drawing{
	public:
		float length;
		float width;
		float height;
		float radius;
		float p= 3.14;
		float area_circle;
		float area_square;
		float area_triangle;
		
	void area(float radius)
	{
		area_circle = 2*p*radius;
		cout<<"Area of Circle is:"<<area_circle<<endl;
	}
	void area(float length,float width)
	{
		area_square = length*width;
		cout<<"Area of Square is:"<<area_circle<<endl;
	}
	void area(float length,float width, float height)
	{
		area_triangle = 2*(length+width) * height;
			cout<<"Area of Shape is:"<<area_triangle<<endl;
	}
};

int main()
{
	Drawing d;
	d.area(15.0);
	d.area(12.3,13.5,10.2);
	d.area(12.4,12.4);
}
