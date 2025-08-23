#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	string id;
	int hrs;
	double salaryperhour;
	
	cout<<"Input the Employees ID (max.10chars) : ";
	cin>>id;
	cout<<"\nInput the working hours : ";
	cin>>hrs;
	cout<<"\nInput the salary per hour : ";
	cin>>salaryperhour;
	
	double salary = hrs * salaryperhour;
	
	cout<<"\n\nDETAILS\n\nEmployees ID = "<<id;
	cout<<"\nSalary       = U$ "<<fixed<<setprecision(2)<<salary;
	
	return 0; 
	
	
	
	
	
}