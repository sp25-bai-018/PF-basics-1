#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	int max;
	
	cout<<"Input the first integer  : ";
	cin>>num1;
	cout<<"Input the second integer : ";
	cin>>num2;
	cout<<"Input the third integer  : ";
	cin>>num3;
	
	max = num1;
	
	if (num2>max){
		max = num2;
	}
	
	if (num3>max){
		max = num3;
	}
	
	cout<<"\nThe maximum of these integers = "<<max;
	
	return 0;
}