#include<iostream>
using namespace std;
int main()
{
	// problem 5
	
	int height = 7, width = 5;
	
	int perimeter = 2*(height + width);
	int area = height * width;
	
	cout<<"The perimeter of rectangle = "<<perimeter<<" inches\n";
	cout<<"The area of rectangle = "<<area<<" square inches\n";
	
	// problem 6
	
	double radius;
	const double pi = 3.14;
	cout<<"\n\nEnter the radius of circle in inches: ";
	cin>>radius;
	
	double per = 2*(pi * radius);
	double a = pi * radius * radius;
	
	cout<<"The perimeter of circle = "<<per<<" inches\n";
	cout<<"The area of circle = "<<a<<" square inches";
	
	return 0;
	
}