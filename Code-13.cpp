#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int distance;
	float fuel;
	
	cout<<"Input the total distance travelled in km: ";
	cin>>distance;
	cout<<"Input the fuel spent in litres          : ";
	cin>>fuel;
	
	float average = distance/fuel;
	
	cout<<"\nAverage consumption (km/lt) = "<<average;
	
	return 0;
	
	
}