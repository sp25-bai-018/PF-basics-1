#include<iostream>
using namespace std;
int main()
{
	// problem 8
	
	int num1, num2;
	
	cout<<"Input the first integer : ";
	cin>>num1;
	cout<<"\nInput the second integer : ";
	cin>>num2;
	
	int sum = num1 + num2;
	
	cout<<"\nThe sum of above two inetegers = "<<sum;
	
	// problem 9
	
	int n1, n2;
	
	cout<<"\n\n*************************************************";
	cout<<"\n\nInput the first integer : ";
	cin>>n1;
	cout<<"\nInput the second integer : ";
	cin>>n2;
	
	int product = n1 * n2;
	
	cout<<"\nThe product of above two inetegers = "<<product;
	
	// problem 10
	
	double weight1, weight2;
	int no1, no2;
	
	cout<<"\n\n***************************************************";
	cout<<"\n\nEnter the first weight : ";
	cin>>weight1;
	cout<<"\nEnter number of item 1 : ";
	cin>>no1;
	cout<<"\nEnter the second weight : ";
	cin>>weight2;
	cout<<"\nEnter number of item 2 : ";
	cin>>no2;
	
	double average =  (weight1*no1) + (weight2*no2) / no1 + no2;
	cout<<"\nAverage value = "<<average;
		
	return 0;
}